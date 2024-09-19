/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
        int t; cin>>t;
        for(int i=1;i<=t;i++){
            int n; cin>>n;
            int x1,x2,y1,y2;
            cin >> x1 >> y1 >> x2 >> y2;
            n--;
            while(n--){
                int xx,yy,xx1,yy1;
                cin>>xx>>yy>>xx1>>yy1;
                x1 = max(x1,xx);
                x2 = min(x2,xx1);
                y1 = max(y1,yy);
                y2 = min(y2,yy1);
                
            }
            if(x2> x1 and y2 > y1)
            cout << "Case #" << i << ": " << abs(x1-x2) * abs(y1-y2) << '\n';
            else
            cout << "Case #" << i << ": 0"<< '\n';
        }
    return 0;
}