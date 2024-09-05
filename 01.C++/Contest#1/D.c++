/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
        ll a, b, c, d; cin>>a>>b>>c>>d;
         if((a*b+c)==d || (a+b*c)==d || (a*b-c)==d || (a-b*c)==d || (a+b-c)==d || (a-b+c)==d ) cout<<"YES\n";
        else cout<<"NO\n";

    return 0;
}