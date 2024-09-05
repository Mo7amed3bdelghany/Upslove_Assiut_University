/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
int main(){
    int n,k; cin>>n>>k;
    vector<ll>v(n);
    for(auto &it:v) cin>>it;
    sort(v.rbegin(), v.rend());
    ll sum=0,i=0;
    while(v[i]>=0 && k--){
        sum+=v[i++];
    }
    cout<<sum<<'\n';
    return 0;
}