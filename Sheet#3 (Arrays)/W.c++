/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
      int n,m; cin>>n>>m;
      vector<vector<ll>>v(n, vector<ll>(m));
      for(auto &x:v)
      for(auto &y:x) cin>>y;

      for(int i=0;i<n;i++){
        for(int j=m-1;j>=0;j--){
            cout<<v[i][j]<<' ';
        }
        cout<<'\n';
      }
    
    return 0;
}

