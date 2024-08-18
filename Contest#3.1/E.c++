/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
int main(){
    int n; cin>>n;
    vector<ll>v(n);
    for(auto &it:v) cin>>it;
    int ans1=0, ans2=0;
    for(int i=0;i<n;i++){
        if((!(i&1) && v[i]>0) || ((i&1) && v[i]<0)) ans1++;
        if((!(i&1) && v[i]<0) || ((i&1) && v[i]>0)) ans2++;
    }
    cout<<min(ans1, ans2)<<'\n';
    
    return 0;
}