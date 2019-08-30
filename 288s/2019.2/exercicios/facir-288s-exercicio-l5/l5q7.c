#include <stdio.h>
/*
 * autor: Prof. Bruno Maciel <brunom4ciel@gmail.com>
 * data: 30/08/2019
 * Resolução de exercício em sala
 *
 * Exercício lista 5, questao 7 (código da lista, questão = L5Q7)
 *
 * Ler 2 valores de ponto flutuante, obtenha uma média ponderada
 * com os pesos 2 e 7 para os respectivos valores e imprima o
 * resultado. É esperado “MEDIA PONDERADA = VALOR”
 *
 * A média ponderada é calculada multiplicando as partes por seus
 * respectivos pesos e depois somando o resultado da multiplicacao
 * Ex:
 * soma_do_produto = valor1 * 2 + valor2 * 7
 * média pondera = soma_do_produto / (2+7)
 *
*/
int main(){
    float valor1,valor2;
    scanf("%f %f", &valor1, &valor2);//entrada de dados pelo usuário
    printf("MEDIA PONDERADA = %.2f", (((valor1*2+valor2*7)/9)) );
    return 0;
}
