/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
        int l1,r1,l2,r2; cin>>l1>>r1>>l2>>r2;
        if(l1>l2){
            swap(l1,l2);
            swap(r1,r2);
        }
        if(l2>r1) cout<<-1<<'\n';
        else{
            cout<<l2<<' '<<min(r1,r2)<<'\n';
            
        }

    return 0;
}