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
        ll arr[100+7];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<' ';
            ll mx=arr[i];
            for(int j=i+1;j<n;j++){
                mx=max(mx,arr[j]);
                cout<<mx<<' ';
            }
        }
        cout<<'\n';

    }

    
    return 0;
}