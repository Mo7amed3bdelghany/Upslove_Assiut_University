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
    // casting
    int ascii= (int)ch;
    
    if(ascii>=65&&ascii<=90){
        cout<<"ALPHA\n"<<"IS CAPITAL\n";
    }
    else if(ascii>=97&&ascii<=122){
        cout<<"ALPHA\n"<<"IS SMALL\n";
    }
    else {
        cout<<"IS DIGIT\n";
    }

    return 0;
}