#include <stdio.h>
/*
 * Programa 010 - Exemplo declaração de variáveis locais. Há erro na linha 12.
*/
int main(){
    int idade,numero_casa,apartamento,posicao;//variáveis locais do bloco de comandos da função main
    scanf("%d", &idade);
    if(idade > 18){
        int j = 0;//variável local do bloco de comandos da estrutura for
        j++;
    }
    printf("%d", j);
    return 0;
}