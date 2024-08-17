/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
  ll N; cin>>N;
  // Hint:  N=> 1e9 
  // The Optimal Sol O(1)
  
  cout<<(N*(N+1))/2<<'\n';

  // This Sol give Time Limit
  /*
  ll ans=0;
  for(int i=1;i<=N;i++){
    ans+=i;
  }
  cout<<ans<<'\n';
  */    

    return 0;
}