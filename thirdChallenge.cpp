#include <iostream>
#include <math.h>

using namespace std;

int factorialWhile(int num)
{
  int count = 1, result = 1;

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

  int resultWhile = factorialWhile(abs(fact));
  int resultFor = factorialFor(abs(fact));

  cout << "O fatorial de " << abs(fact) << "! e a = " << resultWhile << endl;
  cout << "O fatorial de " << abs(fact) << "! e a = " << resultFor;

  return 0;
}