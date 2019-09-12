#include <stdio.h>
/*
 * autor: Prof. Bruno Maciel <brunom4ciel@gmail.com>
 * data: 12/09/2019
 * Resolução do teste 1
 *
 * Teste 1, questao 3 (código da lista, questão = T1Q3)
 *
 * Ler 2 valores inteiros, multiplicar os dois valores
 * e imprima o resultado. É esperado “MULTIPLICACAO = VALOR”
 *
*/
int main(){
    int valor1,valor2;
    scanf("%i %i", &valor1, &valor2);//entrada de dados pelo usuário
    printf("MULTIPLICACAO = %i", (valor1*valor2));
    return 0;
}
