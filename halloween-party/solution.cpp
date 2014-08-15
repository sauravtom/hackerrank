#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long answer(long long n){
    if (n%2 ==0) return n*n/4;
    else return n/2*(n-n/2);
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long n;
        cin >> n;
        cout << answer(n) << endl;
    }
}

