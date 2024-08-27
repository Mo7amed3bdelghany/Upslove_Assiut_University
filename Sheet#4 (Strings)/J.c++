/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    string str; cin>>str;
    vector<int>freq(26);
    for(auto it:str){
        freq[it-97]++;
    }
    for(int i=0;i<26;i++){
        if(freq[i]) cout<<char(i+97)<<" : "<<freq[i]<<'\n';
    }
     
    return 0;
}