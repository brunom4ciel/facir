#include<stdio.h>
/*
 * autor: Prof. Bruno Maciel <brunom4ciel@gmail.com>
 * data: 12/09/2019
 * Resolução do teste 1
 *
 * Teste 1, questao 5 (código da lista, questão = T1Q5)
 *
 * Ler 1 valor inteiro n, que indica o tamanho da sequência. Escreva as seguintes sequências de números: (1, 1 2 3 4 5 6 7 8 9 ... n) (2, 1 2 3 4 5 6 7 8 9  ... n) (3, 1 2 3 4 5 6 7 8 9  ... n) (4, 1 2 3 4 5 6 7 8 9  ... n) ... (n, 1 2 3 4 5 6 7 8 9  ... n) e assim sucessivamente, sem quebra de linha e até que o primeiro número (antes da vírgula) também chegue até o número informado pelo usuário. 
*/
int main(){
	int i, j, n;
	printf("indique o numero de repeticoes\n");
	scanf("%d",&n);
	for(i=1; i < n+1; i++){
		printf("(%d,",i);
		for(j=1; j <n+1; j++){
			printf(" %d",j);
		}
		printf("\n");
	}
	return 0;
}
