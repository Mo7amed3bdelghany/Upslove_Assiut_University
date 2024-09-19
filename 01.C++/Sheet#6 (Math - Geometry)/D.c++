/*
By Mo7amed3bdelghany
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
ll a,b,q; cin>>a>>b>>q;
            q%=3;
      if(q==0) cout<<(a^b);
      else if(q==1) cout<<a;
      else cout << b;
return 0;
}