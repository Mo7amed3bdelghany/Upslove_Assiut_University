/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
     string str,ans; cin>>str;
     for(int i=0;i<str.size();i++){
         if(str[i]=='E' && str[i+1]=='G' && str[i+2]=='Y' && str[i+3]=='P' && str[i+4]=='T') {cout<<ans<<' ';
             ans.clear();
             i+=4;
         }
         else ans.push_back(str[i]);
     }
     cout<<ans<<'\n';

    return 0;
}