/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
        int l, r; cin>>l>>r;
        if((l==0 && r==0 ) || (abs(l-r)>1)) cout<<"NO\n";
        else cout<<"YES\n";

    return 0;
}