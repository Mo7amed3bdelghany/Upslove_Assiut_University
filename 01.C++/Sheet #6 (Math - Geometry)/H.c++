/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a,ll b){
      while(b!=0){
            ll t=a;
            a=b;
            b = t % b;
      }
      return a;
}

ll lcm(ll a,ll b){
      return a * b / gcd(a, b);
}
int main(){

      ll n,m; cin>>n>>m;

      cout<<gcd(n,m)<<' '<<lcm(n,m);
      

       return 0;
}