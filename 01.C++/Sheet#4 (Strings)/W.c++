/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
     string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
     string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
     map<char,char>en, de;
     for(int i=0;i<key.size();i++){
         de[key[i]]=original[i];
         en[original[i]]=key[i];
     }
     
     int Q; cin>>Q;
     string str; cin>>str;
     for(auto it:str){
         if(Q==1) cout<<en[it];
         else cout<<de[it];
     }
     cout<<'\n';
    return 0;
}