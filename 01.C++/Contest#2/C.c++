/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n,k; cin>>n>>k;
    int cnt=0, mn=1e9+7;
    while(n--){
        int x; cin>>x;
        mn=min(x,mn);
        cnt++;
        if(!(cnt%k)) {
            cout<<mn<<' ';
            mn=1e9+7;
        }
    }
    if(mn!=1e9+7) cout<<mn<<'\n';
    return 0;
}