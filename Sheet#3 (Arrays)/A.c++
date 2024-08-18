/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n; cin>>n;
    ll sum=0;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        sum+=x;
    }
    cout<<abs(sum)<<'\n';
    return 0;
}