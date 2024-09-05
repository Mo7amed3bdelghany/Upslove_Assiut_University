/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
    int k, s; cin>>k>>s;
    ll ans=0;
    for(int i=0;i<=k;i++){
        for(int j=0;j<=k;j++){
            ll x=s-(i+j);
                if(x>=0 && x<=k) ans++;
        }
    }
    cout<<ans<<'\n';

    return 0;
}