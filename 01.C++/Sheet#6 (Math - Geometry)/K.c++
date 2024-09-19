/*
By Mo7amed3bdelghany
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

      int n, r;
      cin >> n >> r;
      ll NPR = 1;
      for (int i = (n - r + 1); i <= n; i++) NPR *= i;
      
      ll  NCR = NPR;
      for(int i=r;i>1;i--) NCR /= i;

      cout << NCR << ' ' << NPR << '\n';
      return 0;
}