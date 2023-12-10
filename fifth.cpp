#include <iostream>
#include <cstddef>

using namespace std;

int main()
{
  int varOne;
  int *pointerOne;

  varOne = 5;
  pointerOne = &varOne;

  cout << "Valor da variavel atraves do seu nome: " << varOne << endl;
  cout << "Endereco armazenado no ponteiro: " << pointerOne << endl;
  cout << "Valor da variavel atraves do ponteiro: " << *pointerOne << endl;

  int varTwo = *pointerOne;
  cout << varTwo << endl;

  // varOne = 30;
  // *pointerOne = 30;
  // cout << *pointerOne << endl;
  // cout << varOne << endl;

  // varTwo = 50;
  // pointerOne = &varTwo;
  // cout << *pointerOne << endl;

  // int *pointerTwo = NULL;
  // cout << *pointerTwo << endl;

  int *pointerThree = new int;
  *pointerThree = 36;
  cout << *pointerThree << endl;

  // *pointerThree = *pointerOne;
  // pointerThree = pointerOne => sem * há um vazamento de memória;
  delete pointerThree;

  pointerThree = pointerOne;
  cout << *pointerThree;

  return 0;
}