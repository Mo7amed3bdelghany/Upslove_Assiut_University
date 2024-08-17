/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
   int t; cin>>t;
   while(t--){
    int n; cin>>n;
    int ones=0, decimal=0;
    while(n){
        if(n%2){
            decimal+=(1<<ones);
            ones++;
        }
        n/=2;
    }
    cout<<decimal<<'\n';

   }

    return 0;
}