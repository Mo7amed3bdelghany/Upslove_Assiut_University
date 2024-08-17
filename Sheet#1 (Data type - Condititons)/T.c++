/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
        int A, B, C ; cin>>A>>B>>C;
        int x=A, y=B, z=C;
        if(A>B) swap(A,B);
        if(A>C) swap(A,C);
        if(B>C) swap(B,C);
        
        cout<<A<<'\n'<<B<<'\n'<<C<<'\n'<<'\n';
        cout<<x<<'\n'<<y<<'\n'<<z<<'\n';
        

    return 0;
}