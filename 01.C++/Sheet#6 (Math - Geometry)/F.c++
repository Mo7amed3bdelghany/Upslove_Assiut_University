/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

      int n1,m1,n2,m2; cin>>n1>>m1;
      vector<vector<int>> a(n1, vector<int>(m1));
      for(int i=0;i<n1;i++){
            for(int j=0;j<m1;j++){
                  cin >> a[i][j];
            }
                  }
                  cin>>n2>>m2;
                        vector<vector<int>> b(n2, vector<int>(m2));
                        vector<vector<int>> ans(n1, vector<int>(m2));
                  for(int i=0;i<n2;i++){
                        for(int j=0;j<m2;j++){
                              cin >> b[i][j];
                        }
                  }
                  for(int i=0;i<n1;i++){
                        for(int j=0;j<m2;j++){
                        ll x = 0;
                              for(int k=0;k<n2;k++){
                                    x += a[i][k] * b[k][j];
                              }
                              ans[i][j] = x;
                        }
                  }

                  for(auto it:ans){
                        for(auto ii:it){
                              cout << ii << ' ';
                        }
                        cout << '\n';
                  }
                        return 0;
    }