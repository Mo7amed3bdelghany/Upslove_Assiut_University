/*
By Mo7amed3bdelghany 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
        string s; cin>>s;
        ll n=s.size();
        vector<ll>v(26);
        for(int i=0;i<26;i++) cin>>v[i];
        if(s[0]=='?'){
            ll i=0;
            while(s[i]=='?' && i<n) i++;
            if(i==n){
                cout<<0<<'\n';
                while(n--) cout<<'a';
                return 0;
            }
            else{
                char a=s[i];
                ll x=v[s[i]-'a'];
                for(int it=0;it<26;it++){
                    char b=(char)(it+97);
                    if(v[it]==x && b<a){
                        a=b; break;
                    }
                }
                for(int j=0;j<i;j++) s[j]=a;
            }
        }
        if(s[n-1]=='?'){
            ll i=n-1;
            while(s[i]=='?')i--;
            char a=s[i];
                ll x=v[s[i]-'a'];
                for(int it=0;it<26;it++){
                    char b=(char)(it+97);
                    if(v[it]==x && b<a){
                        a=b; break;
                    }
                }
            for(int j=n-1;j>i;j--) s[j]=a;
            
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='?'){
                ll cnt=0;
                for(int jj=i;jj<n;jj++){
                    if(s[jj]=='?') cnt++;
                    else break;
                }
                ll mn=1e18;
                char a;
                ll kk=v[s[cnt+i]-'a'];
                ll k=v[s[i-1]-'a'];
                for(int l=0;l<26;l++) {
                    ll x=abs(v[l]-k)+abs(v[l]-kk);
                    if(mn>x){
                        mn=x;
                        a=(char)(l+97);
                    }
                }
                
                for(int r=i;r<cnt+i;r++){
                    s[r]=a;
                }
                }
            }
        ll cost=0;
        for(int i=0;i<s.size()-1;i++){
            cost+=abs(v[s[i]-'a']-v[s[i+1]-'a']);
        }
        cout<<cost<<'\n';
        cout<<s<<'\n';
        
        return 0;
}