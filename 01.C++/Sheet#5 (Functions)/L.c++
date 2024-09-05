/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> New_Array(vector<int>v1, vector<int>v2){
   vector<int> v3=v2;
   for(auto it:v1)
      v3.push_back(it);
   return v3;
}
int main(){
   int n; cin>>n;
   vector<int>v1(n), v2(n);
   for(auto &it:v1) cin >> it;
   for(auto &it:v2) cin >> it;
   vector<int>ans=New_Array(v1,v2);
   for(auto it:ans)
      cout << it << ' ';

   return 0;
}