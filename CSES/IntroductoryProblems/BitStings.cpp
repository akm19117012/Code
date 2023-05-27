#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int binPow(int a,int b){
    a=a%mod;
    int res=1;
    while(b){
        if(b&1)
            res=res*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return res;
}
int32_t main(){
    int n=0;
    cin>>n;
    cout<<binPow(2,n);
    return 0;
}