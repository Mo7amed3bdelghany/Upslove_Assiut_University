/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
    int A, B, C; cin>>A>>B>>C;
    int mn =min(A,min(B,C));
    int mx =max(A,max(B,C));
    cout<<mn<<' '<<mx<<'\n';

    return 0;
}