//a06-calculadora.c - executa uma das quatro operações aritméticas sobre dois operandos
#include <stdio.h>
int main ( )
{
  float operando1, operando2;
  char operador; // variável do tipo char
  printf("Operador: ");
  scanf("%c", &operador);
  printf("Operando 1: ");
  scanf("%f", &operando1);
  printf("Operando 2: ");
  scanf("%f", &operando2);
  switch (operador) { // seletor é 1 caractere
    // constante char: sempre entre aspas simples
  case '+': printf("resultado: %f\n", operando1 + operando2);
    break;
  case '-': printf("resultado: %f\n", operando1 - operando2);
    break;
  case '*': printf("resultado: %f\n", operando1 * operando2);
    break;
  case '/': printf("resultado: %f\n", operando1 / operando2);
    break;
  default: printf ("Operador invalido.\n");
  }
  return 0;
}
