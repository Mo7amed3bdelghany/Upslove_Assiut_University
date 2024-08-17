/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
        float x; cin>>x;
        ll y=(int)x;
        if(y==x){
            cout<<"int "<<y<<'\n';
        }
        else{
            cout<<"float "<<y<<' '<<(x-y)<<'\n';
        }
        
    return 0;
}