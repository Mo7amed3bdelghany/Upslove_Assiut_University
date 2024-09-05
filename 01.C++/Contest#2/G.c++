/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t; cin>>t;
    while(t--){
        ll n, s; cin>>n>>s;
        ll mx_sum=(n*(n+1))/2;
        if(s>mx_sum) cout<<-1<<'\n';
        else{
                ll sum=0, y=n;
            while(sum!=s) {
                if((sum+n)<=s && n<=y) {
                    cout<<n<<' '; sum+=n;
                     }
                n--;
            }
            cout<<'\n';
        }
    }

    return 0;
}