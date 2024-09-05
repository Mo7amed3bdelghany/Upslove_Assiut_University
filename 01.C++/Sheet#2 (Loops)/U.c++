/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
   int n, l, r; cin>>n>>l>>r;
   ll ans=0;
   for(int i=1;i<=n;i++){
    int x=i,sum=0;
    while(x){
        sum+=(x%10);
        x/=10;
    }
    if(sum>=l && sum<=r) ans+=i;
   } 
   cout<<ans<<'\n';

    return 0;
}