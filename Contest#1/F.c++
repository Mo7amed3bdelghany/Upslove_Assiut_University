/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
        int n, m; cin>>n>>m;
        /*
        ll res=0, cnt=0;
        while(n || m){
            if((n%2)!=(m%2)){
                // res+=pow(2,cnt);
                res+=(1<<cnt);
            }
            n/=2, m/=2;
            cnt++;
        }
        cout<<res<<'\n';
        */
       
// All of the above are called by name XOR
    cout<<(n^m)<<'\n';

    return 0;
}