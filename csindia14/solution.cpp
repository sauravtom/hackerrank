#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int show_vector(vector<int> & v){
    for (int i=0; i<v.size();i++){
        cout << v[i];
    }
    cout << endl;
    return 0;
}

int lcm_binary(int a,int b){
    int c = a*b;
    while(a!=b){
        if(a>b) a=a-b;
        else    b=b-a;
    }
    return c/a;
}

int lcm_list(vector<int> & v){
    int lcm=1,temp;
    //removing duplicates from vector
    std::sort(v.begin(), v.end());
    v.erase(std::unique(v.begin(), v.end()), v.end());
    
    for (int i=0;i<v.size();i++){
        temp = lcm;
        lcm = lcm_binary(v[i],temp);
    }
    return lcm;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T,n,m,pin;
    cin >> T;
    
    while (T--) {
        std::vector<int> pin_vector;
        cin >> n >> m;
        while(m--){
            cin >> pin;
            pin_vector.push_back(pin);
        }
        //show_vector(pin_vector); 
        cout << n/lcm_list(pin_vector) << endl;
    }
    
    return 0;
}
