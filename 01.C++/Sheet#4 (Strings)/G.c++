/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    string str; cin>>str;
    for(auto &it:str){
        if(it==',') it=' ';
        else{
            if(isupper(it)) it=tolower(it);
            else it=toupper(it);
        }
    }
     cout<<str<<'\n';
    return 0;
}