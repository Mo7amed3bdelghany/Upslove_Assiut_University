/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n,q; cin>>n>>q;
    string str; cin>>str;
    while(q--){
        string pro; cin>>pro;
        if(pro=="back") {
            if(!(str.empty())) cout<<str.back()<<'\n';
        }
        else if(pro=="front") {
           if(!(str.empty()))  cout<<str.front()<<'\n';
        }
        else if(pro=="push_back"){
            char ch; cin>>ch;
            str.push_back(ch);
        }
        else if(pro=="pop_back") {
            if(!(str.empty())) str.pop_back();
        }
        else if(pro=="print"){
            int inx; cin>>inx;
            if(!(str.empty()) && inx<=str.size()) cout<<str[inx-1]<<'\n';
        }
        else {
            int l,r; cin>>l>>r;
            if(l>r) swap(l,r);
            if(!(str.empty()) && l<=str.size() && r<=str.size() ){
            if(pro=="sort"){
                sort(str.begin()+(l-1), str.begin()+r);
            }
            else if(pro=="reverse"){
                reverse(str.begin()+(l-1), str.begin()+r);
            }
            else if(pro=="substr"){
               for(int i=l-1;i<r;i++) cout<<str[i];
               cout<<'\n';
            }
                }
        }
    }
    return 0;
}