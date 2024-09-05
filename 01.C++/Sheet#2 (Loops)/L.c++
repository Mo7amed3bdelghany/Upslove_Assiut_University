/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
   int n, m; cin>>n>>m;
   int mx=1;
   for(int i=1;i<=min(n,m);i++){
        if(!(n%i) && !(m%i)) mx=max(mx,i);
   }
   cout<<mx<<'\n';

    return 0;
}