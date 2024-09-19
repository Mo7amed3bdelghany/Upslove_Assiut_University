/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
     ll l, r; cin>>l>>r;
     if(l>r) swap(l,r);
     float no_even = (int)(r/2)-(int)((l-1)/2);
        ll total = ((r*(r+1)/2)-(l*(l+1)/2))+l;
        cout<<total<<'\n';
        ll l_even=l+(l%2), r_even=r-(r%2);
        ll sum_even = (l_even+r_even)*(no_even/2);
        cout<<sum_even<<'\n';
        ll sum_odd = total-sum_even;
        cout<<sum_odd<<'\n';
    
    return 0;
}