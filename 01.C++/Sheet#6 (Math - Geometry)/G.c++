/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
        ll n; cin>>n;
        ll sum = 0;
        for(ll i=1;i*i<=n;i++){
                if(n%i==0) {
                        sum+=i;
                        if(i!=n/i) sum+=n/i;
                }
        }
        cout<<sum<<'\n';

        return 0;
}