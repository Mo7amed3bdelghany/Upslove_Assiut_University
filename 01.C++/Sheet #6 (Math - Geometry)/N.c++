/*
By Mo7amed3bdelghany
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

    ll ToDecimal(string n, ll base)
{
    ll res = 0, cnt = 1;
    for(int i = n.size()-1;i>=0;i--)
    {
        ll x;
        if(n[i]>='0' and n[i]<='9')
         x = n [i] - '0';
         else
             x = n[i] - 'A' + 10;
        ll sum= x*cnt;
        res += sum;
        cnt*=base;
    }
    return res;
}

string FromDecimal(ll n, ll base)
{
    string res = "";
    while (n)
    {
        ll rem = n % base;
        if (rem < 10)
            res += rem + '0';
        else
            res += rem + 'A' - 10;

        n /= base;
    }
    reverse(res.begin(), res.end());
    return res;
}
int main()
{
    ll t,base;
    cin >> t;
    if (t == 1)
    {
        string n;
        cin >> n >> base;
        cout<<ToDecimal(n, base);
    }
    else
    {
        ll n;
        cin>> n >> base;
        cout << FromDecimal(n, base);
    }

    return 0;
}