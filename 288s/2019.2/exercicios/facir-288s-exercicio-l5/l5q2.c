#include <stdio.h>
/*
 * autor: Prof. Bruno Maciel <brunom4ciel@gmail.com>
 * data: 30/08/2019
 * Resolução de exercício em sala
 *
 * Exercício lista 5, questao 2 (código da lista, questão = L5Q2)
 *
 * Ler dois números inteiros, utilize scanf(“%i %i”, &valor1, &valor2)
 * e substitua o valor recebido em valor1 pelo valor recebido em valor2
 * e faça o mesmo p/ valor2, recebendo o valor1 SEM USO de variável
 * auxiliar. Escreva os valores das variáveis antes e depois da troca.
 * (são dois printf)
*/
int main(){
    int valor1,valor2;
    scanf("%i %i", &valor1, &valor2);//entrada de dados pelo usuário
    printf("valores %i %i\n", valor1, valor2);
    valor1 = valor1 + valor2;
    valor2 = valor1 - valor2;
    valor1 = valor1 - valor2;
    printf("valores %i %i\n", valor1, valor2);
    return 0;
}
