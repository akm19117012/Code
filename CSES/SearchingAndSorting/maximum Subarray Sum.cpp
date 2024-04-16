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
    int n=0;
    cin>>n;
    vi a(n);
    for(auto&x:a)cin>>x;
    int ans= a[0];
    int sum=0;
    for(int i=0;i<n;i++){
        if(sum+a[i]>=a[i]){
            sum+=a[i];
        }else sum=a[i];
        ans=max(ans,sum);
    }
    cout<<sum;
    return 0;
}