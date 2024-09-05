/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int freq[100000+7];
int main(){
    int n, k; cin>>n>>k;
    vector<int> v(n);
    for(auto &it:v) {
        cin>>it;
        freq[it]++;
    }
    for(int i=1;i<=k;i++){
        cout<<freq[i]<<'\n';
    }

    return 0;
}
