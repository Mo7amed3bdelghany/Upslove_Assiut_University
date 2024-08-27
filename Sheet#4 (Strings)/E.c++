/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
     string str; cin>>str;
     ll sum=0;
     for(auto it:str){
         sum+=(it-'0');
     }
     cout<<sum<<'\n';
    return 0;
}