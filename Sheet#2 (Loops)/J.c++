/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
   int n; cin>>n; 
   for(int j=2;j<=n;j++){
    bool ok=1;
   for(int i=2;i*i<=j;i++){
    if(!(j%i)) {
        ok=0;
        break;
    }
   }
   if(ok) cout<<j<<' ';
    }

    return 0;
}