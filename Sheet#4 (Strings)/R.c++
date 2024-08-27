/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    string str; cin>>n>>str;
    int score=0, i=0;
    int m=str.size();
    while(i<m){
        if(str[i]=='V') score+=5;
        else if(str[i]=='W') score+=2;
        else if(str[i]=='X' && i<m-1){
            //remove
            str[i+1]='a';
        }
        else if(str[i]=='Y' && i<m-1){
            str.push_back(str[i+1]);
            str[i+1]='a';
        }
        else if(str[i]=='Z'&& i<m-1){
                if(str[i+1]=='V'){
                    score/=5;
                    //remove
                str[i+1]='a';
                }
                else if(str[i+1]=='W'){
                    score/=2;
                    //remove
                str[i+1]='a';
                }
        }
         m = str.size();
        i++;
    }
    cout<<score<<'\n';
    return 0;
}