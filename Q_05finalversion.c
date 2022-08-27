#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int cont = 0;
int fibo(int size, int k);
void printfibo(int *fibonacci, size_t size);

int main() {
  int k;
  int n;
  printf("\nInsira um numero para calcular seu fibonacci: ");
  scanf("%i", &n);
  printf("\nInsira um numero para verificar dentro do fibonacci de %i: ", n);
  scanf("%i", &k);

    fibo(n,k);
  printf("%i\n",n);
  printf("\nO fibonacci de %i aparece %i vezes na busca do fibonacci de %i\n",k, cont, n);
  return 0;
}

int fibo(int size, int k) {

    if (size < 2){
      return size;
    } else if(size == k){
        cont++; 
      }
    
  return fibo(size-1,k) + fibo(size-2,k);
  
}
  
void printfibo(int *fibonacci, size_t size) {
  printf("[");
  for (size_t i = 0; i < size; i++) {
    printf("%i", fibonacci[i]);
    i == size-1 ? printf("]\n") : printf(",");
  }
}

//A partir da busca da sequencia de fibonacci do numero 2 dentro do fibonacci de 40, o programa apresenta menor velocidade para apresentar os resultados