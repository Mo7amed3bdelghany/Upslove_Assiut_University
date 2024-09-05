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
    int arr[100+7];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll mn=INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            ll x=arr[i]+arr[j]+(j-i);
            mn=min(mn,x);
        }
    }
    cout<<mn<<'\n';
        }
    return 0;
}