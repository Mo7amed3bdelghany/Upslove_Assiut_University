/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
   int n; cin>>n;
   string stars(n,'*');
   for(int i=0;i<n;i++){
    cout<<stars<<'\n';
    stars.pop_back();
   }

    return 0;
}