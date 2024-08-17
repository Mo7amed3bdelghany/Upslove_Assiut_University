/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
   int t; cin>>t;
   while(t--){
    string s; cin>>s;
    for(int i=s.size()-1;i>=0;i--){
        cout<<s[i]<<' ';
    }
    cout<<'\n';
   }

    return 0;
}