/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<ll>v(n);
        for(auto &x:v) cin>>x;
        int cnt=n;
        for(int i=0;i<n;i++){
            ll mx=v[i];
            for(int j=i+1;j<n;j++){
                if(v[j]>=mx){
                    cnt++;
                    mx=max(mx,v[j]);
                }
                else break;
            }
        }
        cout<<cnt<<'\n';
    }

    return 0;
}