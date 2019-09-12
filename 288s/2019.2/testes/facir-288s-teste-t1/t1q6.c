#include<stdio.h>
/*
 * autor: Prof. Bruno Maciel <brunom4ciel@gmail.com>
 * data: 12/09/2019
 * Resolução do teste 1
 *
 * Teste 1, questao 6 (código da lista, questão = T1Q6)
 *
 * Ler 3 valores inteiros (não podem ser iguais) e escrevê-los em ordem crescente.
*/
int main(){
        int i, j, n=0, m=0, p=0;
        printf("indique o numero para ser calculada a tabuada\n");
        while(n==m || n==p || m==p){
                printf("informe tres numeros diferentes\n");
                scanf("%d %d %d",&n,&m,&p);
        }
	if(n>m){
		if(n>p){
			if(m>p){
				printf("%d, %d, %d",p, m, n);
			}else{
				printf("%d, %d, %d", m, p, n);
			}
		}else{
			printf("%d, %d, %d",m, n, p);
		}
	}else{
		if(m>p){
                        if(n>p){
                                printf("%d, %d, %d",p, n, m);
                        }else{
                                printf("%d, %d, %d", n, p, m);
                        }
                }else{
                        printf("%d, %d, %d",n, m, p);
                }
	}

	return 0;
}

