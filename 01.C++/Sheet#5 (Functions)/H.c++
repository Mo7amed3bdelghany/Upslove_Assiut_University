/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void N_Times(int n, char ch){
   while(n--)
      cout << ch << ' ';
}
int main(){
   int t; cin>>t;
   while(t--){
   int n; cin>>n;
   char ch; cin>>ch;
   N_Times(n,ch);
   cout << '\n';
   }


   return 0;
}