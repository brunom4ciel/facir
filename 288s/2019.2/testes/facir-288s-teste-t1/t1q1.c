#include <stdio.h>
/*
 * autor: Prof. Bruno Maciel
 * data: 12/09/2019
 * Resolução do teste 1
 *
 * Teste 1, questao 1 (código da lista, questão = T1Q1)
 * Ler um valor e escrever se é positivo, negativo ou zero.
 *
*/
int main(){
    int valor;
    scanf("%i", &valor);//entrada de dados pelo usuário
    if(valor > 0){
        printf("positivo");
    }else{
        if(valor < 0){
            printf("negativo");
        }else{
            printf("zero");
        }
    }
    return 0;
}
