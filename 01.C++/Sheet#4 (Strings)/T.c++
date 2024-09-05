/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
     string URL; cin>>URL;
     ll n=URL.size();
     vector<string>data{"username","pwd","profile", "role", "key"};
     int i=15;
     for(;i<n;i++){
        if(URL[i]=='u' && URL[i+1]=='s' && URL[i+2]=='e' && URL[i+3]=='r'){
            break;
        }
     }      int inx=0;
         bool yes=0;
             for(int j=i+8;j<n;j++){
                 if(URL[j]=='&'){
                     yes=0;
                     inx++;
                     cout<<'\n';
                     continue;
                 }
                 else if(URL[j]=='='){
                     yes=1;
                     cout<<data[inx]<<": ";
                 }
                 else{
                 if(yes)
                 cout<<URL[j];
                     
                 }
             }

    return 0;
}