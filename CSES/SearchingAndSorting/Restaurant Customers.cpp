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
    int n=0;cin>>n;
    vi a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i]>>b[i];
    sort(all(a));
    sort(all(b));
    int i=0,j=0;
    int ans=1;
    int count=0;
    while(i<n){
        if(a[i]<b[j]){
            i++;
            count++;
        }
        else {
            j++;
            count--;
        }
        ans=max(ans,count);
    }
    cout<<ans;
    return 0;
}