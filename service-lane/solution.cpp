#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int answer(int i,int j,vector<int> & v){
    int min = 4;
    while (i<=j){
        if (v[i] < min) {
            min = v[i];
        }
        i++;
    }
    return min;
}

int main() {
    //cout << height(3);
    //return 0;
    int N,T;
    cin >> N >> T;
    std::vector<int> width_vector;

    while (N--) {
        int n;
        cin >> n;
        width_vector.push_back(n);
    }
    
    /*printing width_vector vector for debugging
    for (int i=0; i<width_vector.size();i++){
        cout << width_vector[i] << endl;
    }
    */
    //cout << answer(0,2,width_vector);
    //return 0;
    while (T--){
        int i,j;
        cin >> i >> j;
        cout << answer(i,j,width_vector) << endl;
    }
}

