/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
        ll n; cin>>n;
        map<ll,ll>mp;
        for(int i=2;i*i<=n;i++){
                while(n%i==0){
                        mp[i]++;
                        n /= i;
                }
        }
        if(n!=1) mp[n]++;
        int ok = 0;
        for(auto it:mp){
                if(ok) cout<< '*';
                cout<<'('<<it.first<<'^'<<it.second<<')';
                ok = 1;
        }
        return 0;
}