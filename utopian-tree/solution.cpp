#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int height(int n){
    int sum = 1;
    int i = 0;
    while(i<n){
        //cout<<sum;
        if (i%2 == 1){
            sum+=1;
        }
        else{sum=sum*2;}
        i++;
    }
    return sum;
}

int main() {
    //cout << height(3);
    //return 0;
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}

