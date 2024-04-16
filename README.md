# Introductory Problems
<details>
  <summary>
    Related Algorithms
  </summary>
</details>
<details>
  <summary>Good Problems</summary>
</details>

<details>
  <summary>
    Weird Algorithm
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
    while (n!=1){
        cout<<n<<' ';
        if(n&1)n=n*3+1;
        else n>>=1;
    }
    cout<<1;
    return 0;
}
```
</details>
</details>
<details>
  <summary>
    Missing Number
  </summary>

  ### IDEA

  ### CODE
```C++
#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    int n=0,temp=0;
    cin>>n;
    int sum=0;
    for(int i=1;i<n;i++){
        cin>>temp;
        sum=sum^temp^i;
    }
    cout<<(sum^n);
    return 0;
}
```
  
</details>
<details>
  <summary>
    Repetition
  </summary>

  ### IDEA

  ### CODE
```C++
#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    string s;
    cin>>s;
    int ans=1;
    int curr=1;
    for(int i=1;i<s.size();i++) {
        if (s[i] == s[i - 1])curr++;
        else curr=1;
        ans=max(ans,curr);
    }
    cout<<ans;
    return 0;
}
```
  
</details>
<details>
  <summary>
    Increasing Array
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
    vi a(n);
    for(auto&i:a)cin>>i;
    int ans=0;
    for(int i=1;i<n;i++)
            if(a[i]<a[i-1]){
                ans+=a[i-1]-a[i];
                a[i]=a[i-1];
            }
    cout<<ans;
    return 0;
}
```
  
</details>
<details>
  <summary>
    Permutations
  </summary>

  ### IDEA

  ### CODE
```C++
#include<bits/stdc++.h>
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define ff first
#define ss second
#define MOD 1000000007
#define all(x) x.begin(),x.end()
#define fastIO ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;
int32_t main(){
    fastIO;
    int n=0;
    cin>>n;
    if(n==2 or n==3 ){
        cout<<"NO SOLUTION";
    }
    else if(n==4){
        cout<<"3 1 4 2";
    }
    else{
        for (int i = 1; i <= n; i += 2)
            cout << i << ' ';
        for (int i = 2; i <= n; i += 2)
            cout << i << ' ';
    }
    return 0;
}
```
  
</details>
<details>
  <summary>
    Number Spiral
  </summary>

  ### IDEA

  ### CODE
```C++
#include<bits/stdc++.h>
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define ff first
#define ss second
#define int long long
#define MOD 1000000007
#define all(x) x.begin(),x.end()
#define fastIO ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;
int32_t main()
{
    fastIO;
    int t=0;
    int x=0,y=0;
    cin>>t;
    while(t--){
        cin>>x>>y;
        int z=max(x,y);
        if(z&1){
            cout<<z*z-x-(z-y-1)<<'\n';
        }else{
            cout<<z*z-(y-1)-(z-x)<<'\n';
        }
    }
    return 0;
}
```
  
</details>
<details>
  <summary>
    Two Knights
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
    for(int k=1;k<=n;k++){
        int totalPositions=k*k*(k*k-1)/2;
        int attackPositions=2*2*(k-1)*(k-2);//number of 2*3 and 3*2 rectangles possible in k*k chessboard
        cout<<totalPositions-attackPositions<<'\n';
    }
    return 0;
}
```
  
</details>
<details>
  <summary>
    Two Sets
  </summary>

  ### IDEA

  ### CODE
```C++
#include<bits/stdc++.h>
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define ff first
#define ss second
#define int long long
#define MOD 1000000007
#define all(x) x.begin(),x.end()
#define fastIO ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
using namespace std;
int32_t main(){
    fastIO;
    int n=0;
    cin>>n;
    int rem=n%4;
    if(rem==2 or rem==1){
        cout<<"NO";
    }else if(rem==3){
        vi a,b;
        for(int i=1;i<=n;i++){
            if(i%4==1 or i%4==2)a.push_back(i);
            else b.push_back(i);
        }
        cout<<"YES\n";
        cout<<a.size()<<'\n';
        for(auto&x:a)cout<<x<<' ';
        cout<<'\n'<<b.size()<<'\n';
        for(auto&x:b)cout<<x<<' ';

    }
    else{
        vi a,b;
        for(int i=1;i<=n;i++){
            if(i%4<=1)a.push_back(i);
            else b.push_back(i);
        }
        cout<<"YES\n";
        cout<<a.size()<<'\n';
        for(auto&x:a)cout<<x<<' ';
        cout<<'\n'<<b.size()<<'\n';
        for(auto&x:b)cout<<x<<' ';
    }
    return 0;
}
```
  
</details>

<details>
  <summary>
    Bit String
  </summary>

  ### IDEA

  ### CODE
```C++
#include<bits/stdc++.h>
#define MOD 1000000007
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
using namespace std;
int binExp(int a,int b,int m){
    a%=m;
    int res=1;
    while (b){
        if(b&1)res=res*a%m;
        a=a*a%m;
        b>>=1;
    }
    return res;
}
int32_t main(){
    fastIO;
    int n=0;
    cin>>n;
    cout<<binExp(2,n,MOD);
    return 0;
}
```
  
</details>
<details>
  <summary>
    Trailing Zeroes
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
    int ans=0;
    while (n){
        ans+=n/5;
        n/=5;
    }
    cout<<ans;
    return 0;
}
```
  
</details>
<details>
  <summary>
    Coin Piles
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
    int t=0,a=0,b=0;
    cin>>t;
    while (t--){
        cin>>a>>b;
        (a+b)%3==0 and max(a,b)<=2*min(a,b) ?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}
```
  
</details>
<details>
  <summary>
    Plaindrome Reorder
  </summary>

  ### IDEA

  ### CODE
```C++
#include<bits/stdc++.h>
#define int long long
using namespace std;
void printChars(char ch,int n){
    while (n--)cout<<ch;
}
int32_t main(){
    string s;
    cin>>s;
    int freq[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    for(auto&ch:s)freq[ch-'A']++;
    int odd=0;
    char och='.';
    for(int i=0;i<26;i++){
        if(freq[i]&1){
            odd++;
            och=char (65+i);
            freq[i]--;
        }
    }
    if(odd>1){
        cout<<"NO SOLUTION";
        return 0;
    }
    for(int i=0;i<26;i++){
        if(!(freq[i]&1)){
            freq[i]>>=1;
            printChars(i+'A',freq[i]);
        }
    }
    if(och!='.')cout<<och;
    for(int i=25;i>=0;i--){
            printChars(i+'A',freq[i]);
    }
    return 0;
}
```
  
</details>
<details>
  <summary>
    Gray Code
  </summary>

  ### IDEA

  ### CODE
```C++
// LOGIC https://www.geeksforgeeks.org/cses-solutions-gray-code/
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define check(x) cout<<#x<<" = "<<x
using namespace std;
vector<string>solve(int n){
    if(n==1)return {"0","1"};
    auto prevGC= solve(n-1);
    auto revGC=prevGC;
    reverse(all(revGC));
    for(int i=0;i<prevGC.size();i++){
        revGC[i]="1"+revGC[i];
        prevGC[i]="0"+prevGC[i];
    }
    revGC.insert(revGC.end(),all(prevGC));
    return revGC;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n =0;
    cin>>n;
    auto ans=solve(n);
    for(auto&x:ans)cout<<x<<'\n';
    return 0;
}
```
  
</details>
<details>
  <summary>
    Tower of Hanoi
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
vector<pii>ans;
void solve(int n,int src,int help,int dest,vector<stack<int>>&vs){
    if(n==0)return;
    if(n==1){
        ans.push_back({src+1,dest+1});
        vs[dest].push(vs[src].top());
        vs[src].pop();
        return;
    }
    solve(n-1,src,dest,help,vs);
    ans.push_back({src+1,dest+1});
    vs[dest].push(vs[src].top());
    vs[src].pop();
    solve(n-1,help,src,dest,vs);
}
int32_t main(){
    fastIO;
    int n=0;
    cin>>n;
    stack<int>a,b,c;
    for(int i=n;i>0;i--)a.push(i);
    vector<stack<int>>vs({a,b,c});

    solve(n,0,1,2,vs);
    cout<<ans.size()<<'\n';
    for(auto&p:ans)
        cout<<p.ff<<' '<<p.ss<<'\n';
    return 0;
}
```
  
</details>

<details>
  <summary>
    Apple Division
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
//vector<vector<int>>dp;
int help(vector<int> a,int n,int&total,int sum1){
    if(n==0){
        int sum2=total-sum1;
        return abs(sum1-sum2);
    }
//    if(dp[n][sum1]!=-1)return dp[n][sum1];
    return min(help(a,n-1,total,sum1+a[n-1]), help(a,n-1,total,sum1));
}
int32_t main(){
    int n=0;
    cin>>n;
    vi a(n);
    int total=0;
    for(auto&i:a) {
        cin >> i;
        total+=i;
    }
//    dp.assign(n+1,vector<int>(total+1,-1));
    cout<<help(a,n,total,0);
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
