#include <stdio.h>
/*
 * autor: Prof. Bruno Maciel <brunom4ciel@gmail.com>
 * data: 30/08/2019
 * Resolução de exercício em sala
 *
 * Exercício lista 5, questao 10 (código da lista, questão = L5Q10)
 *
 * Escreva as seguintes sequências de números:
 * (1, 1 2 3 4 5 6 7 8 9 10)
 * (2, 1 2 3 4 5 6 7 8 9 10)
 * (3, 1 2 3 4 5 6 7 8 9 10)
 * (4, 1 2 3 4 5 6 7 8 9 10) e assim sucessivamente,
 * até que o primeiro número (antes da vírgula), também chegue a 10.
 *
*/
int main(){
    int i,n;
    //é necessário dois laços de repetições
    //o primeiro para os valores antes da virgula
    //o segundo para os valores após virgula
    for(i = 1; i < 11; i++){
        printf("(%i,", i);
        for(n = 1; n < 11; n++){
            printf(" %i", n);
        }
        printf(")\n");
    }
    return 0;
}
