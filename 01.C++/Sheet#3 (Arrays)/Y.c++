/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
      int n, q; cin>>n>>q;
      vector<ll>v(n);
      for(auto &it:v) cin>>it;
      vector<ll>pre(n+1);
      for(int i=1;i<=n;i++){
        pre[i]=pre[i-1]+v[i-1];
      }
      while(q--){
        int l, r; cin>>l>>r;
        cout<<pre[r]-pre[l-1]<<'\n';
      }

    
    return 0;
}

