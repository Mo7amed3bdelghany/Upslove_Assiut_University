/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Swap(int &x, int &y) { 
   int temp = x;
   x = y;
   y = temp;
 }
int main(){
   int n,m; cin>>n>>m;
   Swap(n,m);
   cout << n << ' ' << m;
   return 0;
}