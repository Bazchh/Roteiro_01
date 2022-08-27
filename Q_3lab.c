//QUESTAO 03

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//declarando a fun��o, escopo
char *invertestring(char *string, char *inverse, size_t i, size_t s);

int main() {
  setlocale(LC_ALL, "portuguese");

  int stringsize, valor = 0;
  char *palavra;
  char *inversa;
  //alocando memoria 
  palavra = (char *)malloc(15 * sizeof(char));

  //entrada de dados fornecidos pelo usuario
  printf("\nDigite uma palavra: ");
  fgets(palavra, 15, stdin);
  stringsize = strlen(palavra);
  palavra[--stringsize] = '\0';

  //alocando memoria
  inversa = (char *)malloc(stringsize * sizeof(char));
  
  //chamando a fun��o e atribuindo ela a variavel criada
  inversa = invertestring(palavra, inversa, 0, stringsize);

  //compara as duas palavras
  valor = strcmp(palavra, inversa);

  //saida de dados depois da compara��o
  printf("%s - %s == %i\n", palavra, inversa, valor);

  //condi��o que mostrara ao usuario se � ou nao um palindromo
  if (valor == 0) {
    printf("\nA palavra � pal�ndroma\n");
  } else {
    printf("\nA palavra n�o � pal�ndroma\n");
  }

  return 0;
}

//fun��o que gera a inversao da palavra de maneira recursiva. 
char *invertestring(char *string, char *inverse, size_t i, size_t s) {
  if (s > 0) {
    inverse[i++] = string[--s];
    return invertestring(string, inverse, i, s);
  } else
    return inverse;
}