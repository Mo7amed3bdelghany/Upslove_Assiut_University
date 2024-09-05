/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
   int n; cin>>n;
   int x=n, y=0;
   while(n){
    y+=(n%10);
    y*=10, n/=10;
   }
   y/=10;
   cout<<y<<'\n';
   cout<<(x==y?"YES\n":"NO\n");

    return 0;
}