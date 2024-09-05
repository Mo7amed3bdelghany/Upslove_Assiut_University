/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    string str; cin>>str;
    string hello="hello";
    int j=0;
    for(auto it:str){
        if(it==hello[j]) j++;
        if(j==5)break;
    }
    cout<<(j==5?"YES\n":"NO\n");
    return 0;
}