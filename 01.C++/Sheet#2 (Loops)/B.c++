/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
   int N; cin>>N;
   if(N==1) cout<<-1<<'\n';
   else{
   for(int i=2;i<=N;i+=2){
    cout<<i<<'\n';
        }
   }

    return 0;
}