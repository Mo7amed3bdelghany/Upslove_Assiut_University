/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
        int x1,y1,x2,y2,x3,y3; cin>>x1>>y1>>x2>>y2>>x3>>y3;
        int AB[]={(x1-x2),(y1-y2)};
        int AC[]={(x1-x3),(y1-y3)};
        // (AB[0]*AC[1])-(AB[1]*AC[0])=0
        if((AB[0]*AC[1]) == (AB[1]*AC[0])) 
        cout<<"YES\n";
        else cout<<"NO\n";
    return 0;
}