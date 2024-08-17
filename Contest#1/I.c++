/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
        short x; cin>>x;
        ll f=x%10;
        ll c=(x%100)/10;
        if(f<c && f>0) swap(f,c);
        cout<<(f%c?"NO\n":"YES\n");

    return 0;
}