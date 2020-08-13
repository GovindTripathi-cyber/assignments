
#include <iostream>
#include<math.h>
using namespace std;
  void printPattern(int r) {
  float dist;
  for (int i = 0; i <= 2 * r ; i++)
  {
    for (int j = 0; j <= 2 * r; j++)
    {
      dist = sqrt((i - r) * (i - r) + (j - r) * (j - r));
      if (dist > r - 0.5 && dist < r + 0.5)
        cout << "*";
      else
        cout << " ";
    }

    cout << "\n";
  }
}
int main() {
  int r;
  cin >> r;
  printPattern(r);
  return 0;
}