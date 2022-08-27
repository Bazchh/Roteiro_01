#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define size 3

int **CriaMatriz( size_t n);
void imprimeMatriz(int **mat, size_t n);
void NumRand(int **mat, int n);
int Clregiao(int **mat, int l, int m, int n);
//int Crregiao(int **mat, int l, int m, size_t s, int cont);

int main() {

  int **mat;
  int tam;

  mat = CriaMatriz(size);
  NumRand(mat, size);
  imprimeMatriz(mat, size);
  printf("\n");

  int l = rand() % size, m = rand() % size;
  while (l == m) { m = rand() % size; }
  
  printf("\n[Linha %i] [Coluna %i] = %i\n", l+1, m+1, mat[l][m]); // Inicia numa posição aleatoria da matriz

tam = Clregiao(mat,l,m,size);
  printf("\nTamanho da região: %i\n\n", tam);
  return 0;
}

void imprimeMatriz(int **mat, size_t n){
  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < n; j++) {
      printf(" %i\t", mat[i][j]);
    }
    printf("\n");
  }
}

int **CriaMatriz(size_t n) { 
  size_t i;
  int **mat;

  mat = (int **)malloc(n * sizeof(int *));

  for (i = 0; i < n; i++) {
    mat[i] = (int *)malloc(n * sizeof(int));
  }
  
  return mat;
}

void NumRand(int **mat, int n) {
  size_t i, j;
  
  srand(time(NULL));
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (i == j) {
        mat[i][j] = -1;
      } else if (j > i) {
        mat[i][j] = rand() % 10;
      } else if (i > j) {
        mat[i][j] = rand() % 10;
      }
    }
  }
}

int Clregiao(int **mat, int l, int m, int n){
 int i, j, cont = 0; 
  
  if(l < m){
    printf("\nO indicador está na parte de baixo!");
          for(i=0; i<n; i++){
            for(j=0;j<n;j++){
              if(j < i){
                cont++;
              }    
            }
          }
       
    } else if(m < l){
    printf("\nO indicador está na parte de cima!"); 
    for(i=0; i<n; i++){
            for(j=0;j<n;j++){
              if(i < j){
                cont++;
              }    
            }
          }
  }
  return cont;
}

/*int Crregiao(int **mat, int l, int m, size_t s, int cont){
  
  return Crregiao(mat, l, m, s, cont++);
}*/
    