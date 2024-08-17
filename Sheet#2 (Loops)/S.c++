/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
   int t; cin>>t;
   while(t--){
    int l ,r; cin>>l>>r;
    if(l>r) swap(l,r);
    ll ans=0;
    if(l%2) l+=2;
    else l++;
    for(int i=l;i<r;i+=2){
        ans+=i;
    }
    cout<<ans<<'\n';
   }

    return 0;
}