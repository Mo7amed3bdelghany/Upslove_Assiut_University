/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
        string str; cin>>str;
        vector<string>v;
        ll cnt=0,L=0, R=0;
        string ss;
        for(int i=0;i<str.size();i++){
            if(str[i]=='L') L++;
            else R++;
            ss.push_back(str[i]);
            if(L==R){
                v.push_back(ss);
                cnt++;
                L=0, R=0;
                ss.clear();
            }
        }
        cout<<v.size()<<'\n';
        for(auto it:v) cout<<it<<'\n';
        
    return 0;
}