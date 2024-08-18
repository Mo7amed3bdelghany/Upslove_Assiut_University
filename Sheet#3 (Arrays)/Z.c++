/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
      int n,q; cin>>n>>q;
      vector<int>v(n);
      map<int, int>mp;
      for(auto &it:v) {
        cin>>it;
        mp[it]++;
      }
      while(q--){
        int x; cin>>x;
        cout<<(mp[x]?"found\n":"not found\n");
      }

    return 0;
}

