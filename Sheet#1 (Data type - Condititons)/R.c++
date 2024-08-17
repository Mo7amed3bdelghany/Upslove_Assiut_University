/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
        int Age; cin>>Age;
        int Years=Age/365;
        int Months=(Age%365)/30;
        int Days=(Age%365)%30;
        cout<<Years<<" years\n"<<Months<<" months\n"<<Days<<" days\n";

    return 0;
}