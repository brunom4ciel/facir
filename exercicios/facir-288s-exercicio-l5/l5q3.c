#include <stdio.h>
/*
 * autor: Prof. Bruno Maciel <brunom4ciel@gmail.com>
 * data: 30/08/2019
 * Resolução de exercício em sala
 *
 * Exercício lista 5, questao 3 (código da lista, questão = L5Q3)
 *
 * Ler dois valores e imprimir uma das três mensagens a seguir:
 *  ‘Números iguais’, caso os números sejam iguais;
 *  ‘Primeiro é maior’, caso o primeiro seja maior que o segundo;
 *  ‘Segundo maior’, caso o segundo seja maior que o primeiro.
 *
*/
int main(){
    int valor1,valor2;
    scanf("%i %i", &valor1, &valor2);//entrada de dados pelo usuário
    if(valor1 > valor2){
        printf("Primeiro é maior");
    }else{
        if(valor1 < valor2){
            printf("Segundo é maior");
        }else{
            printf("Números iguais");
        }
    }
    return 0;
}
