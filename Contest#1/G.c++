/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
        ll eye, mouth, body;  cin>>eye>>mouth>>body;
            ll mn=min(eye, min(mouth, body));
                if(mn!=mouth) cout<<mn<<'\n';
                else{
                    cout<<mn+min((body-mn),((eye-mn)/2))<<'\n';
                }

    return 0;
}