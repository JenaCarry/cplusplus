#include <iostream>

using namespace std;

int factorialWhile(int num)
{
  int count = 1;
  int result = 1;

  while (count <= num)
  {
    result *= count;
    count++;
  }

  return result;
}

int factorialFor(int num)
{
  int result = 1;

  for (int count = 1; count <= num; count++)
  {
    result *= count;
  }

  return result;
}

int main()
{
  int fact;

  cout << "Informe o fatorial desejado: ";
  cin >> fact;

  int resultWhile = factorialWhile(fact * -1);
  int resultFor = factorialFor(fact * -1);

  cout << "O fatorial de " << fact * -1 << "! e a = " << resultWhile << endl;
  cout << "O fatorial de " << fact * -1 << "! e a = " << resultFor;

  return 0;
}