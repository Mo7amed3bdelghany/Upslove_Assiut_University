/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int Distinct_Numbers(vector<int>v){
   int count=0;
   vector<int>freq(1e6+7);
   for(auto it:v){
      int x = it;
      if(x<0) {
         x*=-1;
         x+=1e3;
         }
      if(freq[x]==0) count++;
      freq[x]++;
   }
   return count;
}
int main(){
   int n; cin>>n;
   vector<int> v(n);
   for(auto &it:v) cin >> it;
   cout << Distinct_Numbers(v);

   return 0;
}