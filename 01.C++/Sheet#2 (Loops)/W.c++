/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
   int n; cin>>n;
   string stars;
   string space(n-1,' ');
   stars.push_back('*');
   for(int i=0;i<n;i++){
    cout<<space<<stars<<'\n';
    stars+="**";
    space.pop_back();
   }
   string star((n*2)-1,'*');
   space.clear();
   for(int i=0;i<n;i++){
    cout<<space<<star<<'\n';
    star.pop_back(), star.pop_back();
    space+=' ';
   }

    return 0;
}