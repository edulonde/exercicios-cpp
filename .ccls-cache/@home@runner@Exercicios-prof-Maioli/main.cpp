// Dada a função f(x) = x² -3x + 5 crie um algoritmo que calcule o valor de
// f(a), em que a é um número real informado pelo usuário.

#include <iostream>

int soma(int a, int b) { return a + b; }

int main() {
  int s;
  s = soma(3, 5);
  std::cout << "soma: " << s;
}