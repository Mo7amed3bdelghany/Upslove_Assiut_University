/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n; cin>>n;
    while(n--){
        ll l, r; cin>>l>>r;
        if(l>r) swap(l,r);
        ll sum1=(l*(l+1))/2;
        ll sum2=(r*(r+1))/2;
        cout<<(sum2-sum1)+l<<'\n';
    }
    return 0;
}