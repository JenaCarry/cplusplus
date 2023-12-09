#include <iostream>

using namespace std;

float f(float x)
{
  return x * x - 3 * x + 5;
}

int main()
{
  int x;
  cout << "Dada a funcao f(x) = x ^ 2 - 3x + 5.\nInforme o valor de x: ";
  cin >> x;

  cout << "O resultado de f(" << x << ") = " << x << " ^ 2 - 3 x " << x << " + 5 e igual a " << f(x) << "!";

  return 0;
}