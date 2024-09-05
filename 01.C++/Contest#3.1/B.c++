/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
int main(){
    int n; cin>>n;
    vector<int>v(n);
    for(auto &it:v) cin>>it;

    for(int i=0;i<n;i++){
        if(v[i]==0){
            reverse(v.begin(),v.begin()+i);
        }
    }
    for(auto it:v) cout<<it<<' ';
    cout<<'\n';

    return 0;
}