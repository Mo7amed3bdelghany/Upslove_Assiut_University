/*
By Mo7amed3bdelghany
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
      float a, b, c,s,Area;
      cin >> a >> b >> c;
      s = (a + b + c) / 2;
      Area = sqrt(s * (s - a) * (s - b) * (s - c));
      if (Area >0) cout << "Valid\n" << Area;
      else cout << "Invalid\n";

      return 0;
}