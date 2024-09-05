/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
   int n; cin>>n;
   ll cnt=1;
   while(n--){
    for(int i=0;i<3;i++){
        cout<<cnt<<' ';
        cnt++;
    }
    cnt++;
    cout<<"PUM\n";
   }

    return 0;
}