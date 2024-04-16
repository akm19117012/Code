# Sorting and Searching
<details>
  <summary>Related Algorithms</summary>
</details>
<details>
  <summary>Good Problems</summary>
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
<details>
  <summary>Apartments</summary>
  
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

  ```
</details>

<details>
  <summary>
    Ferris Wheel
  </summary>

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
```
</details>

<details>
  <summary>
    Restaurant Customers
  </summary>

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
```
</details>

<details>
  <summary>
    Sum of Two Values
  </summary>

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
```
</details>

<details>
  <summary>
    Maximum Subarray Sum
  </summary>

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
```
</details>

<details>
  <summary>
    Stick Lengths
  </summary>

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
```
</details>
<details>
  <summary>
    Sum of Three Values
  </summary>

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
```
  
</details>
<details>
  <summary>
    
  </summary>

  ### IDEA

  ### CODE
```C++

```
  
</details>
