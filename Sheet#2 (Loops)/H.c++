/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
   int n; cin>>n; 
   for(int i=2;i*i<=n;i++){
    if(!(n%i)) {
        cout<<"NO\n";
        return 0;
    }
   }
   cout<<"YES\n";

    return 0;
}