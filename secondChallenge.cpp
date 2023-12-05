#include <iostream>

using namespace std;

int onlyPositiveNumber(float &number)
{
  while (number < 0)
  {
    cout << "Informe um numero positivo: ";
    cin >> number;
  }

  return 0;
}

int main()
{
  float primeiraNota, segundaNota, terceiraNota, mediaAluno, mediaTurma;

  cout << "Informe a nota da primeira prova: ";
  cin >> primeiraNota;
  onlyPositiveNumber(primeiraNota);

  cout << "Informe a nota da segunda prova: ";
  cin >> segundaNota;
  onlyPositiveNumber(segundaNota);

  cout << "Informe a nota da terceira prova: ";
  cin >> terceiraNota;
  onlyPositiveNumber(terceiraNota);

  mediaAluno = (primeiraNota + segundaNota + terceiraNota) / 3;

  cout << "Informe a media de nota da turma: ";
  cin >> mediaTurma;
  onlyPositiveNumber(mediaTurma);

  if (mediaAluno > mediaTurma)
  {
    cout << "Aluno esta acima da media da turma!\n";
  }
  else if (mediaAluno < mediaTurma)
  {
    cout << "Aluno esta abaixo da media da turma!\n";
  }
  else
  {
    cout << "Aluno esta na media da turma!\n";
  }

  cout << mediaAluno;

  return 0;
}