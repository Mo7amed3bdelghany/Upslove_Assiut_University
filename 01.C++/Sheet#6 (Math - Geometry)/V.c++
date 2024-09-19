/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
        int x1,y1,x2,y2;
        int x3,y3,x4,y4; cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        // to be parallel =>slop1 =slop2
        // the slop = (y1-y2)/(x1-x2)
        
        if(((y1-y2)*(x3-x4))==((y3-y4)*(x1-x2))) cout<<"YES\n";
        else cout<<"NO\n";
        
        
}