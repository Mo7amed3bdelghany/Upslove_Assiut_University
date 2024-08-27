/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t; cin>>t;
    while(t--){
    string str1, str2; cin>>str1>>str2;
    ll n=str1.size(), m=str2.size(),i=0;
        for(;i<min(n,m);i++){
            cout<<str1[i]<<str2[i];
        }
        while(i<n){
            cout<<str1[i++];
        }
        while(i<m){
            cout<<str2[i++];
        }
        cout<<'\n';
    }
     
    return 0;
}