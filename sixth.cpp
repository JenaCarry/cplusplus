#include <iostream>

using namespace std;

int main()
{
  // alocação estática

  // int vet[4];
  // vet[0] = 5;
  // vet[1] = 10;
  // cout << vet[2] << endl; se eu acessar o vet[2] retornará um número aleatório

  // int vet[4] = {5, 10};
  // cout << vet[2] << endl; se eu acessar vet[2] retornará 0

  // int vet[] = {5, 10, 15, 20};

  // for (int i = 0; i < 4; i++)
  // {
  //  cout << vet[i] << " ";
  // }

  // cout << endl;

  // int x = sizeof(vet) / sizeof(int); 16 bits
  // int y = sizeof(int); cada inteiro vale 4 bits
  // cout << x << endl;
  // cout << y;

  // alocação dinâmica

  int arrayLength;
  cout << "Digite o tamanho do array: ";
  cin >> arrayLength;

  int *vet = new int[arrayLength];

  for (int i = 0; i < arrayLength; i++)
  {
    cout << "Digite o elemento da posicao [" << i + 1 << "]: ";
    cin >> vet[i];
  }

  cout << vet[0];

  delete[] vet;

  return 0;
}