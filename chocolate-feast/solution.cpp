#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long answer(long long n,long long c, long long m){
    long long ans=n/c;
    long long wrappers = n/c; 
    while(wrappers >= m){
        ans+=wrappers/m;
        wrappers = wrappers/m + (wrappers)%m;
    }
    return ans;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,c,m;
    cin>>t;
    while(t--){
        cin>>n>>c>>m;
        int ans=answer(n,c,m);
        
        cout<<ans<<endl;
    }
    return 0;
}

