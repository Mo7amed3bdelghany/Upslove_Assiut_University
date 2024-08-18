/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n; cin>>n;
    ll arr[1000+7];
    int p1=0, p2=0, mn=1e5+7, mx=-1e5+7;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(mn>arr[i]){
            mn=arr[i];
            p1=i;
        }
        if(mx<arr[i]){
            mx=arr[i];
            p2=i;
        }
    }
    swap(arr[p1],arr[p2]);
    for(int i=0;i<n;i++) cout<<arr[i]<<' ';
    cout<<'\n';
    
    return 0;
}