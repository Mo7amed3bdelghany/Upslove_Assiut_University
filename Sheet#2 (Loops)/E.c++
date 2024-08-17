/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
   int n; cin>>n;
   int mx=0;
   for(int i=0;i<n;i++){
    int num; cin>>num;
    mx=max(mx,num);
   }
   cout<<mx<<'\n';

    return 0;
}