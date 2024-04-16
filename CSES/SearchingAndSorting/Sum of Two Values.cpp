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
    int n=0,x=0;
    cin>>n>>x;
    vi a(n);
    for(auto&x:a)cin>>x;
    map<int,int>mp;
    mp[a[0]]=0;
    for(int i=1;i<n;i++){
        if(mp.find(x-a[i])!=mp.end()) {
            cout << mp[x - a[i]] + 1 << ' ' << i + 1;
            return 0;
        }
        else mp[a[i]]=i;
    }
    cout<<"IMPOSSIBLE";
    return 0;
}