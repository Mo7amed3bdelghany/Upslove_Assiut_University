/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
        ll A, B, C, D; cin>>A>>B>>C>>D;
        ll ans=(A%100)*(B%100)*(C%100)*(D%100);
        ans%=100;
        if(ans<10)cout<<0;
        cout<<ans<<'\n';

    return 0;
}