/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
        float x, y; cin>>x>>y;
        if(x==0 && y==0) cout<<"Origem";
        else if(x==0 && y!=0) cout<<"Eixo Y";
        else if(x!=0 && y==0) cout<<"Eixo X";
        else {
            if(x>0 && y>0) cout<<"Q1";
            else if(x<0 && y>0) cout<<"Q2";
            else if(x<0 && y<0) cout<<"Q3";
            else cout<<"Q4";
        }

    return 0;
}