#include <stdio.h>
/*
 * autor: Prof. Bruno Maciel
 * data: 30/08/2019
 * Resolução de exercício em sala
 *
 * Exercício lista 5, questao 1 (código da lista, questão = L5Q1)
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
