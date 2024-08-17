/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
    int n; cin>>n;
int a=0, b=1;
for(int i=0;i<n;i++){
    cout<<a<<' ';
    int temp=b;
    b+=a;
    a=temp;
}

    return 0;
}