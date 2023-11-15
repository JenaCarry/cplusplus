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

  // potência = a ^ b
  float pot = pow(a, b);
  cout << "Power: " << pot << endl;

  // Incremento e Decremento
  // a = a + 1 ou a = a - 1
  // a += 1 ou a -= 1
  // a++ ou a--
  a++;
  cout << "Increment: " << a << endl;

  a--;
  cout << "Decrement: " << a << endl;

  return 0;
}