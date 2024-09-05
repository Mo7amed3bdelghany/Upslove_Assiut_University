/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
     string str; cin>>str;
     ll n=str.size();
     for(int i=0;i<n/2;i++){
         if(str[i]!=str[n-i-1]) {
             cout<<"NO\n";
             return 0;
         }
     }
     cout<<"YES\n";
     
    return 0;
}