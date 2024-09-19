/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
        ll n; cin>>n;
        double sum = 0;
        for(int i=1;i<=n;i++){
             sum += log10(i);
        }
        cout<<"Number of digits of "<<n<<"! is "<<floor(sum)+1<<endl;

        return 0;
}