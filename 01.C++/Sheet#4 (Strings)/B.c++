/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    string s; getline(cin,s);
    for(auto it:s){
        if(it!='\\') cout<<it;
        else return 0;
    }
    return 0;
}