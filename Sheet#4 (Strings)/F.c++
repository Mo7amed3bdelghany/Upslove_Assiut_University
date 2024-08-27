/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t; cin>>t;
    while(t--){
     string str; cin>>str;
     ll n=str.size();
     if(n<=10) cout<<str<<'\n';
     else{
         cout<<str[0]<<n-2<<str[n-1]<<'\n';
     }
    }
    return 0;
}