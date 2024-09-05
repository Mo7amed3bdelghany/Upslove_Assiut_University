/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
        float X; cin>>X;
        if(X<0||X>100) cout<<"Out of Intervals\n";
        else{
            if(X>=0 && X<=25) cout<<"Interval [0,25]\n";
            else if(X>25 && X<=50) cout<<"Interval (25,50]\n";
            else if(X>50 && X<=75) cout<<"Interval (50,75]\n";
            else if(X>75 && X<=100) cout<<"Interval (75,100]\n";
        }
        
    return 0;
}