/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
        ll num1, num2, res;
        char op, eql;
        cin>>num1>>op>>num2>>eql>>res;
        ll ans;
        if(op=='+'){
            ans = num1+num2;
        }
        else if(op=='-'){
            ans = num1-num2;
        }
        else if(op=='*'){
            ans = num1*num2;
        }

        if(ans==res){
            cout<<"Yes"<<'\n';
        }
        else{
            cout<<ans<<'\n';
        }

    return 0;
}