#include<bits/stdc++.h>
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define MOD 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define check(x) cout<<#x<<" = "<<x<<'\n'
#define pii pair<int,int>
#define ff first
#define ss second
#define th third
#define int long long
using namespace std;
int32_t main(){
    int n=0,x=0,ans=0;
    cin>>n>>x;
    vi a(n);
    for(auto&x:a)cin>>x;
    sort(all(a));
    int i=0,j=n-1;
    while(i<j){
        if(a[i]+a[j]<=x){
            i++;
        }
        j--;ans++;
    }
    cout<<ans;
    return 0;
}