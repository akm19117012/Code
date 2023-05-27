#include<bits/stdc++.h>
#define pii pair<int,int>
#define ff first
#define ss second
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
    stack<int>a,b,c;
    int n=0;;
    cin>>n;
    for(int i=n;i>0;i--)a.push(i);
    vector<stack<int>>vs({a,b,c});
    solve(n,0,1,2,vs);
    cout<<ans.size()<<'\n';
    for(auto&p:ans)
        cout<<p.ff<<' '<<p.ss<<'\n';
    
    return 0;
}
