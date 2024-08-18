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
        if(arr[i]==0) continue;
        (arr[i]>0? arr[i]=1:arr[i]=2);
    }
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<' ';
    }
    cout<<'\n';
    return 0;
}