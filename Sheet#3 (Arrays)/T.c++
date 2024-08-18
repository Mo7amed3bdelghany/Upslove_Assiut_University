/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n; cin>>n;
    int arr[107][107];
    int sum_d1=0, sum_d2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) sum_d1+=arr[i][j];
            if(i+j==n-1) sum_d2+=arr[i][j];
        }
    }
    cout<<abs(sum_d1-sum_d2)<<'\n';

    return 0;
}