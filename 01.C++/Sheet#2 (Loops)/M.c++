/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
    int A, B; cin>>A>>B;
    if(A>B) swap(A,B);
    bool check=1;
    for(int i=A;i<=B;i++){
        bool ok=1;
        int x=i;
        while(x){
            if((x%10)!=7 && (x%10)!=4){ 
                ok=0;
                break;
            }
            x/=10;
        }
        if(ok) {
            cout<<i<<' ';
            check=0;
            }
    }
        
        if(check) cout<<-1<<'\n';

    return 0;
}