/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

ll fact(int x){
    if(x<2) return 1;
    ll res=1;
    for(int i=2;i<=x;i++){
        res*=i;
    }
    return res;
}
int main(){
   int n;  cin>>n;
   while(n--){
    int x; cin>>x;
    cout<<fact(x)<<'\n';    
   }

    return 0;
}