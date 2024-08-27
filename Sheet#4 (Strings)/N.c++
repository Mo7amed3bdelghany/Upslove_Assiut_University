/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n; cin>>n;
    string str; cin>>str;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(str[i]!=str[i+1]) cnt++;
    }
    cout<<cnt<<'\n';
    return 0;
}