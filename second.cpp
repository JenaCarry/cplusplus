#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int a = 5, b = 2;

  // cout << "Soma: " << a + b << endl;
  int sum = a + b;
  cout << "Sum: " << sum << endl;

  // soma
  int sub = a - b;
  cout << "Subtraction: " << sub << endl;

  // subtração
  int mult = a * b;
  cout << "Multiplication: " << mult << endl;

  // divisão inteira
  int divInt = a / b;
  cout << "Integer Divide: " << divInt << endl;

  // divisão com vírgula
  float divFloat = (float)a / (float)b;
  cout << "Float Division: " << divFloat << endl;

  // resto da divisão
  int restDiv = a % b;
  cout << "Rest of Division: " << restDiv << endl;

  return 0;
}