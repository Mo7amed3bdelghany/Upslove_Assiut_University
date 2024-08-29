/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void swap_row(int n,int row1,int row2, vector<vector<int>>&v){
for(int i=0;i<n;i++){
   swap(v[row1][i], v[row2][i]);
}
}
void swap_col(int n,int col1,int col2, vector<vector<int>>&v){
for(int i=0;i<n;i++){
   swap(v[i][col1], v[i][col2]);
}
}
int main(){
   int n, x,y; cin>>n>>x>>y;
   vector<vector<int>>v(n,vector<int>(n));
   for(auto &it:v)
   for(auto &ii:it) cin>>ii;

   swap_row(n, x-1, y-1, v);
   swap_col(n, x-1, y-1, v);

   for(auto it:v){
   for(auto ii:it) cout << ii << ' ';
   cout << '\n';
      }
   return 0;
}