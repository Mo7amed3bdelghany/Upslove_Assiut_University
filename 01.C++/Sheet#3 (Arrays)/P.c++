/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n; cin>>n;
    int arr[300];
    bool ok=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]&1) ok=1;
        else arr[i]/=2;
    }
    if(ok) cout<<0<<'\n';
    else{
        ll cnt=1;
        bool fin=0;
        while(1){
            for(int i=0;i<n;i++){
                if(arr[i]&1) {fin=1;break;}
                arr[i]/=2;
            }
            if(fin) break;
            cnt++;
                }
            cout<<cnt<<'\n';
    }
    return 0;
}