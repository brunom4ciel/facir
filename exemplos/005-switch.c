#include <stdio.h>
/*
 * Programa 005 - Exemplo switch
*/
int main(){
    int idade=18;
    switch(idade){
        case 18:
            printf("idade 18");
            break;
        default:
            printf("outra idade");
    }
	return 0;
}