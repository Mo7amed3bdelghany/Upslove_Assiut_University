/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    string str; getline(cin, str);
    int cnt=0;
    for(int i=0;i<str.size();i++){
        bool ch=0;
        while(str[i]!=' ' && i<str.size()){
            if(str[i]!='!' && str[i]!='?' && str[i]!='.' && str[i]!=',') ch=1;
            else break;
            i++;
        }
        if(ch) cnt++;
    }
    cout<<cnt<<'\n';
    return 0;
}