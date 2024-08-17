/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
   int n; cin>>n;
   int even=0, odd=0, pos=0, neg=0;
   for(int i=0;i<n;i++){
    int x; cin>>x;
    if(x%2) odd++;
    else even++;
    if(x>0) pos++;
    else if(x<0) neg++;
}
cout<<"Even: "<<even<<'\n';
cout<<"Odd: "<<odd<<'\n';
cout<<"Positive: "<<pos<<'\n';
cout<<"Negative: "<<neg<<'\n';

    return 0;
}