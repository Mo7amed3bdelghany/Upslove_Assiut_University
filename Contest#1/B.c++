/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
        ll Memo, Momo, k; cin>>Memo>>Momo>>k;
        if(Memo%k && Momo%k) cout<<"No One\n";
        else if(Memo%k && !(Momo%k))  cout<<"Momo\n";
        else if(!(Memo%k) && Momo%k) cout<<"Memo\n";
        else cout<<"Both\n";

    return 0;
}