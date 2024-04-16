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
    fastIO;
    int n=0,m=0,k=0,ans=0;
    cin>>n>>m>>k;
    vi a(n),b(m);
    for(auto&x:a)cin>>x;
    for(auto&x:b)cin>>x;
    sort(all(a));
    sort(all(b));
    int i=0,j=0;
    while(i<n and j<m){
        if(abs(a[i]-b[j])<=k){
            i++;j++;ans++;
        }
        else if(a[i]<b[j])i++;
        else j++;
    }
    cout<<ans;
    return 0;
}