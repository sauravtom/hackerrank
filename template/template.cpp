
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int answer(int n){
    return n;
}

int main() {
    //cout << answer(3);
    //return 0;
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << answer(n) << endl;
    }
}
