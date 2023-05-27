#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    int n=0;
    cin>>n;
    //Total combination - wrong combinations
    //Wrong combinations = (chosing number of 3x2 grid + 2x3 grid in nxn grid)*2
    cout<<"0\n";
    for(int i=2;i<=n;i++){
        cout<<(((i*i)*(i*i-1))>>1)-4*(i-2)*(i-1)<<'\n';
    }
    return 0;
}