/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
int freq[10000];
int main(){
    int n; cin>>n;
    vector<int>v(n);
    for(auto &it:v){
        cin>>it;
        freq[it]++;
    }
    ll ans=0;
    for(auto it:v){
        if(freq[it+1]) ans++;
    }
    cout<<ans<<'\n';
    
    return 0;
}