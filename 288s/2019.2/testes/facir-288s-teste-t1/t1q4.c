#include<stdio.h>
/*
 * autor: Prof. Bruno Maciel <brunom4ciel@gmail.com>
 * data: 12/09/2019
 * Resolução do teste 1
 *
 * Teste 1, questao 4 (código da lista, questão = T1Q4)
 *
 * Ler 1 valor inteiro n e se n for ZERO, deve ser lido um novo valor até n ser diferente de ZERO, depois calcule e escreva a tabuada do n correspondente (de 1 à 10). O resultado esperado é: (n x 1) = x (n x 2) = y … (n x 10) = z.
*/
int main(){
        int i, j, n=0;
        printf("indique o numero para ser calculada a tabuada\n");
	while(n==0){
		printf("informe um numero diferente de zero\n");
        	scanf("%d",&n);
	}
        for(i=1; i < 11; i++){
                printf("(%d x %d) = %d\n", n, i, (i*n));
        }

        return 0;

}


