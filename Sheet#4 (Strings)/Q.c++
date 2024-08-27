/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    string str; 
    bool ok=0;
    while(cin>>str){
        if(ok)cout<<' ';
        reverse(str.begin(),str.end());
        cout<<str;
        ok=1;
    }
    return 0;
}