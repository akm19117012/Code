#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n=0;
    cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++)ans^=i;
    int x=0;
    while(n--!=1){
        cin>>x;
        ans^=x;
    }
    cout<<ans;
    return 0;
}