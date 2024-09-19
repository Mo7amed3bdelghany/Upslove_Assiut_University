/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
        double x1,y1,x2,y2;
        double x3,y3,x4,y4; cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        double X_centerA = (x1+x2)/2, Y_centerA = (y1+y2)/2;
        double X_centerB = (x3+x4)/2, Y_centerB = (y3+y4)/2;
        double dis_A = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
        double dis_B = sqrt(pow(x3-x4,2) + pow(y3-y4,2));
        double RA =  dis_A/2;
        double RB =  dis_B/2;
        double dist_AB = sqrt(pow(X_centerA - X_centerB,2) + pow(Y_centerA - Y_centerB,2));
        if(dist_AB > (RB + RA)) cout<<"NO\n";
        else cout<<"YES\n";
        
}