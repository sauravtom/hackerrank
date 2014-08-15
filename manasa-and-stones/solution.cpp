#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> answer(int n,int a,int b){
    std::vector<int> some_vector;
    n--;
    for(int i=0;i <= n;i++){
        //cout << a*i + b*(n-i) << endl;
        some_vector.push_back(a*i + b*(n-i));
    }
    //removing duplicates from vector
    std::sort(some_vector.begin(), some_vector.end());
    some_vector.erase(std::unique(some_vector.begin(), some_vector.end()), some_vector.end());
    return some_vector;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n,a,b;
        cin >> n >> a >> b;
        std::vector<int> some_vector = answer(n,a,b);
        
        for (int i=0; i<some_vector.size();i++){
            cout << some_vector[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
