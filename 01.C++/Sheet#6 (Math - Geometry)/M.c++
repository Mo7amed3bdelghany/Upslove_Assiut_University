/*
By Mo7amed3bdelghany
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
      string n;
      ll x,ans=0; 
      cin>>n>>x;
      for(int i=0;i<n.size();i++){
            ans*=10;
            ans+=n[i]-'0';
            ans %= x;
      }
      cout << (ans == 0 ? "YES" : "NO");

      return 0;
}