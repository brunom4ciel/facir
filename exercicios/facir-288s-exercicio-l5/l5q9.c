#include <stdio.h>
/*
 * autor: Prof. Bruno Maciel <brunom4ciel@gmail.com>
 * data: 30/08/2019
 * Resolução de exercício em sala
 *
 * Exercício lista 5, questao 9 (código da lista, questão = L5Q9)
 *
 * Calcule e escreva a tabuada do 8 (1 a 10).
 *
*/
int main(){
    int i;
    for(i = 1; i < 11; i++){
        printf("8x%i = %i\n", i, (8 * i));
    }
    return 0;
}
