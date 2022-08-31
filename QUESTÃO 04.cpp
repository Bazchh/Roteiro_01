#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Duas funções uma para o coeficiente binomial e outra para o fatorial*/
int CoeficienteBinomial (int k, int n);
int Fat (int num);

/*Chamada da função do coeficiente binomial*/
int CoeficienteBinomial (int k, int n){
    /*O if vai checar se o n é igual a k e logo em seguida ira checar se k é igual a 0
    caso contrário vai retornar a operção de acordo com a formúla da mesma*/
     if((n == k) && (k == 0)){  
        return 1;
    } 
    else{ 
        return ((Fat (n - 1) / (Fat (k - 1) * Fat ((n - 1) - (k - 1))) ) + (Fat (n - 1) / (Fat(k) * Fat ((n - 1) - k))));
    }
}

/*Chamada da função Fat (Fatorial), para realizar o cálculo de um número inteiro*/
int Fat (int num){
    /*O if vai checar se o fatorial é menor ou igual a 1, caso seja vai retornar fat
    caso contrário vai retornar o cálculo de fatorial*/
    if (num <= 1){
        return num;
    }
    else {
        return (num * Fat (num - 1));
    }
}

/*Chamada da função main*/
int main(){
setlocale (LC_ALL, "portuguese");

    int n, k;
    
    /*Um printf pedindo dois valores para ser realizado o cálculo do coeficiente binomial*/
    printf ("Informe dois valores: \n");
    scanf ("%d%d", &n, &k);

    /*O if vai checar se n é maior ou igual a k, caso seja, a operação será feita e concluída, e o resultado será apresentado
    caso o n seja menor do que o k, não será possível realizar a operação*/
    if (n >= k){
        printf ("O coeficiente Binomial de %d e %d = %d \n\n", n, k, CoeficienteBinomial(k, n));
    }
    else{
        printf ("Não é possível resolver a operação!!!");
    }

    return 0;   
}