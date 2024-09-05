/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
        short x, y;
        char ch; 
        cin>>x>>ch>>y;
        char cmp;
        if(x>y) cmp='>';
        else if(x<y) cmp='<';
        else cmp='=';
        cout<<(cmp==ch?"Right\n":"Wrong\n");

    return 0;
}