#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
     ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
   ll n; cin>>n;
  if(n==1) {
      cout<<"NO";
      return 0;
  }
    for(ll i=2;i*i<=n;i++){
        if((n%i)==0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}