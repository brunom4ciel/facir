#include <stdio.h>
/*
 * Programa 009 - Exemplo declaração de variáveis locais. Há erro na linha 12.
*/
int main(){
    int idade,numero_casa,apartamento,posicao;//variáveis locais do bloco de comandos da função main
    for(idade=0; idade < 18; idade++){
        int j = 0;//variável local do bloco de comandos da estrutura for
        j++;
    }
    printf("%d", j);
    return 0;
}