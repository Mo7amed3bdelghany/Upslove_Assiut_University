/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
        char ch; cin>>ch;
        int ascii =(int)ch;
        if(ascii>=65&&ascii<=90){
            ascii+=32;
        }
        else if(ascii>=97&&ascii<=122){
            ascii-=32;
        }
        cout<<char(ascii)<<'\n';

    return 0;
}