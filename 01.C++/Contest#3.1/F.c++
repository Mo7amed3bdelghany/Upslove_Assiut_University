/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
int main(){
    int n; cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n/2;i++){
        cout<<arr[i]<<' '<<arr[n-i-1]<<' ';
    }
    if(n&1) cout<<arr[n/2];
    cout<<'\n';
    
    return 0;
}