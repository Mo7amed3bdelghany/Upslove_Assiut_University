/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
        ll x,y,r,n; cin>>x>>y>>r>>n;
        while(n--){
            int x1,y1; cin>>x1>>y1;
            float dis = sqrt(pow(x1-x,2)+pow(y1-y,2));
            if(dis<=r) cout<<"YES\n";
            else cout<<"NO\n";
        }
    return 0;
}