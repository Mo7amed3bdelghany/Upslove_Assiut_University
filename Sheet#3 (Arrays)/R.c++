/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n; cin>>n;
    int A[1000+7], B[1000+7];
    for(int i=0;i<n;i++) cin>>A[i];
    for(int i=0;i<n;i++) cin>>B[i];
    sort(A, A+n);
    sort(B, B+n);
    for(int i=0;i<n;i++){
        if(A[i]!=B[i]){
            cout<<"no\n";
            return 0;
        }
    }
    cout<<"yes\n";

    return 0;
}