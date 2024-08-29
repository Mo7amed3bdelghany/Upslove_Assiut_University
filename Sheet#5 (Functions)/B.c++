/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int print_number(int n){
   bool ok = 0;
   for (int i=1; i<=n;i++){
      if(ok) cout << ' ';
      cout << i ;
      ok = 1;
   }
}
int main(){
    int n; cin>>n;
    print_number(n);
    return 0;
}