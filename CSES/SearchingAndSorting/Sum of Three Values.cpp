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
    int n=0,x=0;
    cin>>n>>x;
    vi a(n,0);
    for(auto&x:a)cin>>x;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int k=x-a[i]-a[j];
            if(mp.find(k)!=mp.end() and mp[k]!=i and mp[k]!=j){
                cout<<i+1<<' '<<mp[k]+1<<' '<<j+1;
                return 0;
            }
        }
        mp[a[i]]=i;
    }
    cout<<"IMPOSSIBLE";
    return 0;
}