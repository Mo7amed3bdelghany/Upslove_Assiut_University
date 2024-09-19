#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
   ll n; cin>>n;
   cout<<(!((n-1)&n)? "YES\n":"NO\n");
    return 0;
}