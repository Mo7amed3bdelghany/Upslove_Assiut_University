/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n; cin>>n;
    string s; cin>>s;
    ll sum=0;
    for(auto it:s){
        sum+=(it-'0');
    }
    cout<<sum<<'\n';


    
    return 0;
}