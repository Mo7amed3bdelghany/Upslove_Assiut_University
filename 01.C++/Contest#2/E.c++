/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll num_set; cin>>num_set;
    ll row=(num_set)/4;
    ll col=(num_set)%4;
    if(row&1) col=abs(col-3);
    cout<<row<<' '<<col<<'\n';
    
    return 0;
}