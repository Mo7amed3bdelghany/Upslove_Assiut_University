/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
      int n,m; cin>>n>>m;
      vector<vector<char>>v(200, vector<char>(200,'x'));
      for(int i=2;i<n+2;i++){
        for(int j=2;j<m+2;j++){
            cin>>v[i][j];
        }
      }

      ll row, col; cin>>row>>col;
      row++, col++;
      for(int i=row-1;i<=row+1;i++){
        for(int j=col-1;j<=col+1;j++){
            if(i!=row || j!=col){
                if(v[i][j]=='.'){
                    cout<<"no\n";
                    return 0;
                }
            }
        }
      }
      cout<<"yes\n";

    return 0;
}