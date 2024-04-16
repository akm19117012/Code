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
    int n=0;
    cin>>n;
    vi a(n,0);
    for(auto&x:a)cin>>x;
    sort(all(a));
    int cost=0;
    for(int i=0;i<(n>>1);i++){
        cost+=a[i+(n>>1)+(n&1)]-a[i];
    }
    cout<<cost;
    return 0;
}
// n=5
//n>>1=2
//1 2 2 3 5
//