#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int answer(int n){
    int digit,num=n;
    std::vector<int> digit_vector;
    while(n>0){
        digit = n%10;
        if (digit == 0){
            n = n/10;
            continue;
        }
        if(num%digit ==0){
            digit_vector.push_back(digit);
            //cout << digit;
        }
        n = n/10;
    }
    //removing duplicates from vector
    //std::sort(digit_vector.begin(), digit_vector.end());
    //digit_vector.erase(std::unique(digit_vector.begin(), digit_vector.end()), digit_vector.end());
    
    return digit_vector.size();
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << answer(n) << endl;
    }
    return 0;
}

