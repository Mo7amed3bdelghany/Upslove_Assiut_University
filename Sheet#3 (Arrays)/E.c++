/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n; cin>>n;
    int arr[1000+7];
    int mn = 1e5+7, pos=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(mn>arr[i]){
            mn=arr[i], pos=i+1;
        }
    }
    cout<<mn<<' '<<pos<<'\n';
    return 0;
}