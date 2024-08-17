/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
   int n; cin>>n;
   for(int i=1;i<=n;i++){
    if(!(n%i)) cout<<i<<'\n';
   }

    return 0;
}