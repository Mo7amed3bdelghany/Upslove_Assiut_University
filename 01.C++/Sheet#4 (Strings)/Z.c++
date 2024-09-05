/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    string s;
     bool ok=0;
    while(getline(cin,s)){
        bool ch=0;
        if(s==""|| s==" ")continue;
        for(int i=0;i<s.size();i++){
            if(s[i]=='/' && s[i+1]=='/' && !ok){
                break;
            }
            else if(s[i]=='/' && s[i+1]=='*'){
                i++;
                ok=1;
            }
            else if(s[i]=='*' && s[i+1]=='/' && ok){
                i++;
                ok=0;
            }
            else if(!ok){
                ch=1;
                cout<<s[i];
            }
        }
        if(ch && !ok)
        cout<<'\n';
        
    }
    return 0;
}