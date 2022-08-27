#include <stdio.h>
#include <stdlib.h>

//Função que inverte o vetor recursivamente.//
int *inverte(int vet[], int inicio, int fim){
		
		int aux;
		//Estrutura para repetir o processo até a metade do tamanho do vetor.//
		if(inicio < fim){
			aux = vet[inicio];
			//Atibuição do valor final do vetor para a primeira posição.//
			vet[inicio] = vet[fim];
			//Atibuição do primeiro valor do vetor para a última posição.//
			vet[fim] = vet[inicio];
			vet[fim] = aux;
		//Chamada da funçao para passar por todos os valor do vetor//	
		inverte(vet, inicio+1, fim-1);
	
		}
		//Retorno da função com o vetor invertido.//
	return vet;
}

int main(){
	//Declaração da variavel de contagem e do vetor.//
	int i, vet[10];
	//Solicitação ao usuario dos 10 valores desse vetor.//
	printf("Escreva 10 valores inteiros.\n");
	for(i = 0; i < 10; i++){
		scanf("%i", &vet[i]);
	}
	
	//Apresentação do vetor antes de invertido.//
	printf("\n\nVetor antes de invertido = ");
	for(i = 0; i < 10; i++){
			printf("\t%i", vet[i]);
	}
	
	//Chamada da função passando o vetor e suas pisições inícial e final.//
	int *v = inverte(vet, 0, 9);
	
	//Apresentação do vetor depois de invertido.//
	printf("\n\nVetor depois de invertido = ");
	for(i = 0; i < 10; i++){
			printf("\t%i", v[i]);
	}
	printf("\n\n");
	
	return 0;
}