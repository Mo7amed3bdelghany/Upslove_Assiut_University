/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void Shift_Right(int n, int t, deque<int> &d){
   t%=n;
      while(t--){
         d.push_front(d.back());
         d.pop_back();
   }
}

int main(){
   int n, x; cin>>n>>x;
   deque<int>v(n);
   for(auto &it:v) cin>>it;

   Shift_Right(n, x, v);
   for(auto it:v)
      cout << it << ' ';

   return 0;
}