/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> max_and_min(int n, vector<int>&v){
 int mx=0, mn=1e5+7;
 for(int i=0;i<n;i++){
   if(mx<v[i]) mx=v[i];
   if(mn>v[i]) mn=v[i];
 }
 return {mn, mx};
}
int main(){
   int n; cin>>n;
   vector<int>v(n);
   for(auto &it:v) cin>>it;
   vector<int>ans;
   ans=max_and_min(n,v);
   cout << ans[0] << ' ' << ans[1];

   return 0;
}