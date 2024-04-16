#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n=0;
    cin>>n;
    vector<int> a(n,0);
    stack<int>st;
    for(int i=0;i<n;cout<<' '){
        cin>>a[i];
        while(!st.empty() and a[i]<=a[st.top()])st.pop();
        st.empty()?cout<<0:cout<<st.top()+1;
        st.push(i++);
    }
    return 0;
}