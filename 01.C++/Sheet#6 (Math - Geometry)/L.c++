/*
By Mo7amed3bdelghany
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
      int n; cin>>n;
      vector<vector<int>>v;
      v.push_back({1});
      for(int i=1;i<=n;i++){
            vector<int>vec=v.back(),res;
            res.push_back(1);
            
            for(int j=0;j<vec.size()-1;j++){
                  res.push_back(vec[j]+vec[j+1]);
            }

            res.push_back(1);
            v.push_back(res);
      }
      for (int i = 0;i<n;i++){
            for(auto it:v[i]) cout<<it<<' ';
            cout<<'\n';
      }
            return 0;
}