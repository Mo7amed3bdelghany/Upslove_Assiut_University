/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n, m; cin>>n>>m;
    vector<ll>v1(n), v2(m);
    for(auto &it:v1) cin>>it;
    for(auto &it:v2) cin>>it;

    int j=0;
    for(auto it:v1){
        if(it==v2[j])j++;
    }
    cout<<(j==m?"YES\n":"NO\n");

    return 0;
}