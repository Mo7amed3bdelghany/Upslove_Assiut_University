/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
        ll num1, num2;
        char operation; 
        cin>>num1>>operation>>num2;
        if(operation=='+'){
            cout<<num1+num2<<'\n';
        }
        else if(operation =='-'){
            cout<<num1-num2<<'\n';
        }
        else if(operation =='*'){
            cout<<num1*num2<<'\n';
        }
        else {
            cout<<num1/num2<<'\n';
        }


    return 0;
}