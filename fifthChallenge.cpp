#include <iostream>

using namespace std;

int main()
{
  int age;
  float income;

  cout << "Bem Vindo ao Programa Moradia Popular! Para participar informe sua idade e sua renda.\nQual sua idade? ";
  cin >> age;

  cout << "Qual sua renda? R$";
  cin >> income;

  if (age >= 21 && income <= 1200)
  {
    cout << "Voce pode participar do Programa Moradia Popular!";
  }
  else
  {
    cout << "Voce nao pode participar do Programa Moradia Popular!";
  }

  return 0;
}