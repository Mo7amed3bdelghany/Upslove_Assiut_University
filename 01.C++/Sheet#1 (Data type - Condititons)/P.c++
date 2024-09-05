/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
        string s; cin>>s;
        char ch =s[0];
        cout<<((ch-'0')%2?"ODD\n":"EVEN\n");

    return 0;
}