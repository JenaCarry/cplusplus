#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int x;
  cout << "Dada a funcao f(x) = x ^ 2 - 3x + 5.\nInforme o valor de x: ";
  cin >> x;

  int result = pow(x, 2) - 3 * x + 5;
  cout << "O resultado de f(" << x << ") = " << x << " ^ 2 - 3 x " << x << " + 5 e igual a " << result << "!";

  return 0;
}