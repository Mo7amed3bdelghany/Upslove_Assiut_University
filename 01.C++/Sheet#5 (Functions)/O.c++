/*
By Mo7amed3bdelghany
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int MAX(vector<int> v)
{
   int mx = 0;
   for (auto it : v)
   {
      if (it > mx)
         mx = it;
   }
   return mx;
}

int MIN(vector<int> v)
{
   int mn = 105;
   for (auto it : v)
   {
      if (it < mn)
         mn = it;
   }
   return mn;
}

int Num_Prime(vector<int> v)
{
   int cnt = 0;
   for (auto it : v)
   {
      bool ok = 1;
      for (int i = 2; i * i <= it; i += 1 + (i & 1))
      {
         if (!(it % i))
         {
            ok = 0;
            break;
         }
      }
      if (ok && it>1)
         cnt++;
   }
   return cnt;
}

int Num_Palindrmoe(vector<int> v)
{
   int cnt = 0;
   for (auto it : v)
   {
      if (it < 10)
         cnt++;
      else
      {
         bool ok = 1;
         string s = to_string(it);
         for (int i = 0; i < s.size() / 2; i++)
         {
            if (s[i] != s[s.size() - i - 1])
            {
               ok = 0;
               break;
            }
         }
         if (ok)
            cnt++;
      }
   }
   return cnt;
}

int Num_Max_Divisors(vector<int> v)
{
   int mx = 0, count=0;
   for (auto it : v)
   {
      int cnt = 1;
      for (int i = 2; i <= it ; i++){
         if(it%i==0){
            cnt++;
         }
      }
      if(cnt>count){
         count=cnt;
         mx = it;
      }
      else if(cnt==count){
         if(mx<it){
            mx=it;
         }
      }
   }
   return mx;
}
int main()
{
   int n;
   cin >> n;
   vector<int> v(n);
   for (auto &it : v)
      cin >> it;
   cout << "The maximum number : " << MAX(v) << '\n';
   cout << "The minimum number : " << MIN(v) << '\n';
   cout << "The number of prime numbers : " << Num_Prime(v) << '\n';
   cout << "The number of palindrome numbers : " << Num_Palindrmoe(v) << '\n';
   cout << "The number that has the maximum number of divisors : " << Num_Max_Divisors(v) << '\n';

   return 0;
}