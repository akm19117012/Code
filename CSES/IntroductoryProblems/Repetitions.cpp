#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    cin>>s;
    int maxLen=1;
    int currLen=1;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1])currLen++;
        else currLen=1;
        maxLen=max(maxLen,currLen);
    }
    cout<<maxLen;
    return 0;
}