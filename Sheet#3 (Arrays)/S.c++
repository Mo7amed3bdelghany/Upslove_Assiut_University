/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n,m; cin>>n>>m;
    vector<vector<ll>>v(n, vector<ll>(m));
    for(auto &x:v) 
    for(auto &y:x) cin>>y;
    int num; cin>>num;

    for(auto x:v){
    for(auto y:x){
        if(num==y) {
            cout<<"will not take number\n";
            return 0;
        }
    }
        }
        cout<<"will take number\n";

    return 0;
}