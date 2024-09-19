/*
By Mo7amed3bdelghany
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
      ll l,r,k; cin>>l>>r>>k;
        if(l>r) swap(l,r);
        ll n1 = (r / k), n2 = ((l - 1) / k);
        cout << ((n1 *( n1 + 1)) / 2 * k ) - ( (n2 * (n2 + 1)) / 2 * k);

        return 0;
}