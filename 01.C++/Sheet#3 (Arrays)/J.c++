/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n; cin>>n;
    ll arr[1000+7];
    ll mn=INT_MAX, cnt=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mn=min(mn, arr[i]);
    }
    for(int i=0;i<n;i++) {
        if(arr[i]==mn) cnt++;
    }
    cout<<(cnt&1?"Lucky\n":"Unlucky\n");


    
    return 0;
}