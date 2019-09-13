#include <stdio.h>
/*
 * Programa 018 - Exemplo com extern
*/
int idade = 18;
int main(){
    extern int idade;
    printf("%d", idade);
    return 0;
}