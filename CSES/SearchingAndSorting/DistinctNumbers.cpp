#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define vi vector<int>
using namespace std;
int32_t main(){
    int n=0;
    cin>>n;
    vi a(n);
    for(auto&i:a)cin>>i;
    sort(all(a));
    int ans=1;
    for(int i=1;i<n;i++)
        if(a[i]!=a[i-1])ans++;
    cout<<ans;
    return 0;
}
