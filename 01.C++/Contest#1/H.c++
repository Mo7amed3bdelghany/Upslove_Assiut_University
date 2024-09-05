/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
    ll a, b, c; cin>>a>>b>>c;
    if((a*b)%c) cout<<"double\n";
    else {
        if(((a*b)/c)<=2147483647) cout<<"int\n";
        else cout<<"long long\n";
    }

    return 0;
}