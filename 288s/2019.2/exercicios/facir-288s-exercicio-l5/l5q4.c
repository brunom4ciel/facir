#include <stdio.h>
/*
 * autor: Prof. Bruno Maciel <brunom4ciel@gmail.com>
 * data: 30/08/2019
 * Resolução de exercício em sala
 *
 * Exercício lista 5, questao 4 (código da lista, questão = L5Q4)
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
