/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
   while(1){
    int n, m; cin>>n>>m;
    if(n>m) swap(n,m);
    if(n<=0) return 0;
        int sum=0;
    for(int i=n;i<=m;i++){
        cout<<i<<' ';
        sum+=i;
    }
    cout<<"sum ="<<sum<<'\n';
   }

    return 0;
}