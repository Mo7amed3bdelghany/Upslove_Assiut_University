/*
By Mo7amed3bdelghany
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
      float r, s;
      cin >> r >> s;
      if (s >= r * 2)
            cout << "Square\n";
      else if (r * 2 >= s*sqrt(2))
            cout << "Circle\n";
      else
            cout << "Complex\n";

                return 0;
}