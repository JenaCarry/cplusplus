#include <iostream>

using namespace std;

float pow(int base, int exp)
{
  float result = base;

  for (int i = 1; i < exp; i++)
  {
    result *= base;
  }

  return result;
}

int main()
{
  int base, exp;
  cout << "Vamos calcular a potencia! \nDigite um numero real para a Base (a): ";
  cin >> base;

  cout << "Digite um numero para o Expoente (n): ";
  cin >> exp;

  cout << "O resultado da potencia de " << base << " elevado a " << exp << " e igual a " << pow(base, exp) << endl;

  char key = 's';

  while (key == 's')
  {
    cout << "Voce gostaria de calcular outra potencia? Digite S ou N: ";
    cin >> key;

    if (key == 's')
    {
      cout << "Digite um numero real para a Base (a): ";
      cin >> base;

      cout << "Digite um numero para o Expoente (n): ";
      cin >> exp;

      cout << "O resultado da potencia de " << base << " elevado a " << exp << " e igual a " << pow(base, exp) << endl;
    }
  }

  return 0;
}