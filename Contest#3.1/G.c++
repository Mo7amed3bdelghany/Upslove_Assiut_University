/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<ll>v(n);
        int odd=0, even=0;
        for(auto &it:v){
            cin>>it;
            odd+=(it&1), even+=!(it&1);
        }
        if(n&1) cout<<-1<<'\n';
        else{
            cout<<abs(min(odd,even)-(n/2))<<'\n';
        }
    }
    
    return 0;
}