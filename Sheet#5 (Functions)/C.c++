/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string Binary(int x){
   string s;
   while(x){
      if(x%2) s.push_back('1');
      else s.push_back('0');
      x /= 2;
   }
   return s;
}
bool wonder(int n){
   if(!(n&1))
      return false;
   string str=Binary(n);
      for(int i=0;i<str.size()/2;i++){
         if(str[i]!=str[str.size()-i-1])
            return false;
      }
      return true;
}
int main(){
    int n; cin>>n;
    cout << (wonder(n) ? "YES\n" : "NO\n");
    return 0;
}