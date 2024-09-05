/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll Equation(int x, int n){
   ll res = 0;
   for (int i = 2; i <= n;i+=2){
      res+=pow(x,i) ;
   }
   return res;
}
int main(){
   int x, n; cin>>x>>n;
   cout << Equation(x, n);
   return 0;
}