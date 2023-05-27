#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n=0;
    cin>>n;
    while(n!=1){
        cout<<n<<' ';
        if(n&1){
            n=n*3+1;
        }
        else n>>=1;
    }
    cout<<1;
    return 0;
}