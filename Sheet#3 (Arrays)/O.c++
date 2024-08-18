/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n; cin>>n;
    ll a=0, b=1;
    while(--n){
        ll temp=b;
        b+=a;
        a=temp;
    }
    cout<<a<<'\n';
    return 0;
}