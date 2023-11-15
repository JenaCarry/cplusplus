#include <iostream>

using namespace std;

int main()
{
  float gradeOne, gradeTwo;
  cout << "Informe a primeira nota: ";
  cin >> gradeOne;

  cout << "Informe a segunda nota: ";
  cin >> gradeTwo;

  float average = (gradeOne + gradeTwo) / 2;

  cout << "Media do aluno e: " << average << endl;

  if (average < 2.5)
  {
    cout << "Nota final: D\n";
  }
  else if (average < 5)
  {
    cout << "Nota final: C\n";
  }
  else if (average < 7)
  {
    cout << "Nota final: B\n";
  }
  else
  {
    cout << "Nota final: A\n";
  }

  float frequency;
  cout << "Qual e a frequencia do aluno? ";
  cin >> frequency;

  // logical operators
  // if (average >= 5 && frequency >= 75)
  // {
  //   cout << "Aluno APROVADO!";
  // }
  // else
  // {
  //   cout << "Aluno REPROVADO!";
  // }

  // ternary operator
  (average >= 5 && frequency >= 75) ? cout << "Aprovado!" : cout << "Reprovado!";

  return 0;
}