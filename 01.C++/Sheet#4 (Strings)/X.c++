/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    string str; cin>>str;
    string s,ans=str,ss=str;
    int n=str.size();
    for(int i=0;i<n-1;i++){
        s.push_back(ss[i]);
        str.erase(0,1);
        string s1=s, s2=str;
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        ans=min(ans,(s1+s2));
    }
    cout<<ans<<'\n';
    
    return 0;
}