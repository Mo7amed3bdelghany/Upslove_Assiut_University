/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n; cin>>n;
    int arr[1000+7];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // sort(arr, arr+n);

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]) swap(arr[i], arr[j]);
        }
    }
    
    for(int i=0;i<n;i++) cout<<arr[i]<<' ';
    cout<<'\n';
    
    return 0;
}