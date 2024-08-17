/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n; cin>>n;
    ll mx=0;
    while(n--){
        ll x; cin>>x;
        ll cnt=0;
        while(!(x%2)){
            cnt++;
            x/=2;
        }
        mx=max(mx,cnt);
    }
    cout<<mx<<'\n';
    return 0;
}