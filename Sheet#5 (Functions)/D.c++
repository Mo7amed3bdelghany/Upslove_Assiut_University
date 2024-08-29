/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool is_prime(int x){
for(int i=2;i*i<=x;i+=1+(i&1)){
if(!(x%i))
   return false;
}
return x>1;
}
int main(){
   int t; cin>>t;
   while(t--){
    int n; cin>>n;
    cout << (is_prime(n) ? "YES\n" : "NO\n");
   }
    return 0;
}