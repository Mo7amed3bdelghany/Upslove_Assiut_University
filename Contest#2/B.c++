/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int num; cin>>num;
    string s(num,'*');
    int l=0, r=num-1;
    for(int i=0;i<num/2;i++){
        s[l]='\\';
        s[r]='/';
        cout<<s<<'\n';
        s[l]='*', s[r]='*';
        l++, r--;
    }
    s[num/2]='X';
    cout<<s<<'\n';
    s[num/2]='*';
    l--, r++;
    for(int i=0;i<num/2;i++){
        s[l]='/';
        s[r]='\\';
        cout<<s<<'\n';
        s[l]='*', s[r]='*';
        l--, r++;
    }
    return 0;
}