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
     bool ok=0;
     for(int i=0;i<str.size()-2;i++){
            if(str[i]==str[i+2] && str[i]!=str[i+1]){
                ok=1;
                break;
            }
     }
     cout<<(ok?"Good\n":"Bad\n");
    }
     
    return 0;
}