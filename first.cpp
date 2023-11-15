#include <iostream>

using namespace std;

int main()
{
  int inteiro = 5;
  cout << "Inteiro = " << inteiro << endl;

  float real = 6.8;
  cout << "Real = " << real << endl;

  double bigReal = 8.2e99;
  cout << "Big Real = " << bigReal << endl;

  bool boolean = true;
  cout << "Boolean = " << boolean << endl;

  // char é aspas simples e apenas uma letra
  char letra = 'B';
  cout << "Char = " << letra << endl;

  string palavra = "Bola";
  cout << "String = " << palavra << endl;

  string nome;
  cout << "Qual e seu nome?" << endl;
  cin >> nome;

  int idade;
  cout << "Quantos anos voce tem?" << endl;
  cin >> idade;

  cout << "Nome: " << nome << endl;
  cout << "Idade: " << idade << endl;

  return 0;
}