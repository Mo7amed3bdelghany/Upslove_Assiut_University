/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n; cin>>n;
    int arr[100000+7];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k; cin>>k;
    for(int i=0;i<n;i++){
        if(k==arr[i]) {
            cout<<i<<'\n';
            return 0;
        }
    }
    cout<<-1<<'\n';
    return 0;
}