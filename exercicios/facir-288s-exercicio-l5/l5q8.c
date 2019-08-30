#include <stdio.h>
/*
 * autor: Prof. Bruno Maciel <brunom4ciel@gmail.com>
 * data: 30/08/2019
 * Resolução de exercício em sala
 *
 * Exercício lista 5, questao 8 (código da lista, questão = L5Q8)
 *
 * Ler 2 valores e se o segundo valor informado for ZERO, deve ser
 * lido um novo valor, ou seja, para o segundo valor não pode ser
 * aceito o valor zero e imprimir o resultado da divisão do primeiro
 * valor lido pelo segundo valor lido. (utilizar a estrutura REPETIR)
 *
*/
int main(){
    float valor1,valor2=0;
    scanf("%f", &valor1);//entrada de dados pelo usuário
    while(valor2 == 0){
        scanf("%f", &valor2);//entrada de dados pelo usuário
    }
    printf("valores %.2f %.2f", valor1, valor2);
    return 0;
}
