#include <stdio.h>
/*
 * autor: Prof. Bruno Maciel <brunom4ciel@gmail.com>
 * data: 30/08/2019
 * Resolução de exercício em sala
 *
 * Exercício lista 5, questao 6 (código da lista, questão = L5Q6)
 *
 * Ler 2 valores de ponto flutuante, obtenha uma média
 * ponderada com os pesos 2 e 7 para os respectivos
 * valores e imprima o resultado.
 * É esperado “MEDIA PONDERADA = VALOR”
 *
*/
int main(){
    int valor1,valor2;
    scanf("%i %i", &valor1, &valor2);//entrada de dados pelo usuário
    printf("MEDIA PONDERADA = %i", (valor1*2+valor2*7)/9);
    return 0;
}
