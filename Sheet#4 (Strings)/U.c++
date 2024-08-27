/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
     string str; cin>>str;
     int e=0,g=0,y=0,p=0,t=0;
     for(int i=0;i<str.size();i++){
         str[i]=tolower(str[i]);
         if(str[i]=='e') e++;
         else if(str[i]=='g') g++;
         else if(str[i]=='y') y++;
         else if(str[i]=='p') p++;
         else if(str[i]=='t') t++;
     }
     cout<<min(e,min(g,min(y,min(p,t))))<<'\n';

    return 0;
}