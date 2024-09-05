/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n; cin>>n;
    map<char,ll>mp;
    for(int i=0;i<n;i++){
        char x; cin>>x;
        mp[x]++;
    }
    for(auto it:mp){
        if(it.second) {
            for(int i=0;i<it.second;i++) cout<<it.first;
        }
    }
    cout<<'\n';
    
    return 0;
}