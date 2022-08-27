#include <stdio.h>
#include <stdlib.h>

//Fun��o que inverte o vetor recursivamente.//
int *inverte(int vet[], int inicio, int fim){
		
		int aux;
		//Estrutura para repetir o processo at� a metade do tamanho do vetor.//
		if(inicio < fim){
			aux = vet[inicio];
			//Atibui��o do valor final do vetor para a primeira posi��o.//
			vet[inicio] = vet[fim];
			//Atibui��o do primeiro valor do vetor para a �ltima posi��o.//
			vet[fim] = vet[inicio];
			vet[fim] = aux;
		//Chamada da fun�ao para passar por todos os valor do vetor//	
		inverte(vet, inicio+1, fim-1);
	
		}
		//Retorno da fun��o com o vetor invertido.//
	return vet;
}

int main(){
	//Declara��o da variavel de contagem e do vetor.//
	int i, vet[10];
	//Solicita��o ao usuario dos 10 valores desse vetor.//
	printf("Escreva 10 valores inteiros.\n");
	for(i = 0; i < 10; i++){
		scanf("%i", &vet[i]);
	}
	
	//Apresenta��o do vetor antes de invertido.//
	printf("\n\nVetor antes de invertido = ");
	for(i = 0; i < 10; i++){
			printf("\t%i", vet[i]);
	}
	
	//Chamada da fun��o passando o vetor e suas pisi��es in�cial e final.//
	int *v = inverte(vet, 0, 9);
	
	//Apresenta��o do vetor depois de invertido.//
	printf("\n\nVetor depois de invertido = ");
	for(i = 0; i < 10; i++){
			printf("\t%i", v[i]);
	}
	printf("\n\n");
	
	return 0;
}