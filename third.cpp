#include <iostream>

using namespace std;

// constante ou uma tarefa
#define pi 3.14;
#define like cout << "Enjoy this video!\n"

void hello()
{
  cout << "Hello!" << endl;
}

// int &x, int &y = tudo o que acontecer com x e y modificará o a e b
int sum(int x, int y)
{
  int total = x + y;

  return total;
}

int main()
{
  hello();

  int a, b;
  cout << "Digite um numero: ";
  cin >> a;

  cout << "Digite outro numero: ";
  cin >> b;

  int total = sum(a, b);
  cout << "A soma entre " << a << " + " << b << " e igual a: " << total << endl;

  like;

  return 0;
}