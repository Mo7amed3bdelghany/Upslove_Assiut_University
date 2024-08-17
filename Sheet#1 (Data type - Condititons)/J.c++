/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
    int A, B; cin>>A>>B;
    if(A<B) swap(A,B);
    cout<<(A%B? "No Multiples\n":"Multiples\n");

    return 0;
}