/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int a, b; cin>>a>>b;
    string s; cin>>s;
    if(s[a]!='-')cout<<"No\n";
    else{
    for(int i=0;i<s.size();i++){
        if(i!=a){
            if(s[i]=='-')cout<<"No\n";
            return 0;
        }
    }
    cout<<"Yes\n";
    }

    
    return 0;
}