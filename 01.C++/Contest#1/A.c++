/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
        float disc, AfterDisc;
        cin>>disc>>AfterDisc;
        float BeforeDisc = (AfterDisc*100)/(100-disc);
        cout<<fixed<<setprecision(9)<<BeforeDisc<<'\n';

    return 0;
}