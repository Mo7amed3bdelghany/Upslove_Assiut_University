/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

float Average(int n, vector<float>v){
float sum=0;
for(auto &it:v){
   sum += it;
}
return sum / n;
}

int main(){
   int n ;
   cin >> n;
   vector<float> v(n);
   for(auto &it :v) cin>>it;
   cout<<fixed<<setprecision(6)<<Average(n,v);

   return 0;
}