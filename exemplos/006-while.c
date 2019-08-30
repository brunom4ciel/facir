#include <stdio.h>
/*
 * Programa 006 - Exemplo while
*/
int main(){
    int idade=17;
    while(idade % 2 != 0){
        printf("idade %i\n",idade);
        idade = idade + 1;
    }
    return 0;
}