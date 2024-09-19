/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
     ll l,r,m; cin>>l>>r>>m;
     ll ans=1;
     for(int i=l;i<=r;i++){
         ans%=m;
         ans*=(i%m);
     }
     cout<<ans%m<<'\n';
    return 0;
}