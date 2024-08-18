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
        if(arr[i]<=10){
            cout<<"A["<<i<<"] = "<<arr[i]<<'\n';
        }
    }
    return 0;
}