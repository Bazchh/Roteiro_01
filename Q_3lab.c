//QUESTAO 03

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//declarando a função, escopo
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
  
  //chamando a função e atribuindo ela a variavel criada
  inversa = invertestring(palavra, inversa, 0, stringsize);

  //compara as duas palavras
  valor = strcmp(palavra, inversa);

  //saida de dados depois da comparação
  printf("%s - %s == %i\n", palavra, inversa, valor);

  //condição que mostrara ao usuario se é ou nao um palindromo
  if (valor == 0) {
    printf("\nA palavra é palíndroma\n");
  } else {
    printf("\nA palavra não é palíndroma\n");
  }

  return 0;
}

//função que gera a inversao da palavra de maneira recursiva. 
char *invertestring(char *string, char *inverse, size_t i, size_t s) {
  if (s > 0) {
    inverse[i++] = string[--s];
    return invertestring(string, inverse, i, s);
  } else
    return inverse;
}