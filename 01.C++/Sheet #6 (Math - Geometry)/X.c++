/*
By Mo7amed3bdelghany
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
      vector<int>x(4);
      vector<int>y(4);

      for (int i = 0; i < 4; i++){
            cin >> x[i] >> y[i];
      }
      sort(x.begin(), x.end()); x.resize(unique(x.begin(), x.end()) - x.begin());
      sort(y.begin(), y.end()); y.resize(unique(y.begin(), y.end()) - y.begin());
      int n; cin>>n;
      while(n--){
            int a,b; cin>>a>>b;
            if(a>=x[0] && a<=x[1] && b>=y[0] && b<=y[1]) cout<<"YES\n";
            else cout << "NO\n";
      }

      return 0;
}