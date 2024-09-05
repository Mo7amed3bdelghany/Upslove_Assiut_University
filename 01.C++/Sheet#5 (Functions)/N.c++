/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> Shift_Zeros(vector<int>v){
   vector<int>ans;
   int cnt=0;
   for(auto it:v){
      if(it!=0) ans.push_back(it);
      else cnt++;
   }
   while(cnt--){
      ans.push_back(0);
   }
   return ans;
}
int main(){
   int n; cin>>n;
   vector<int> v(n);
   for(auto &it:v) cin >> it;
   vector<int>ans = Shift_Zeros(v);

   for(auto it:ans)
      cout << it << ' ';

   return 0;
}