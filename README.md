# Sorting and Searching
<details>
  <summary>Related Algorithms</summary>
</details>
<details>
  <summary>Distinct Numbers</summary>
  
  ### IDEA
  
  ### CODE
```C++
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
    sort(all(a));
    int ans=1;
    for(int i=1;i<n;i++)
        if(a[i]!=a[i-1])ans++;
    cout<<ans;
    return 0;
}
```
</details>
