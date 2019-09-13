#include <stdio.h>
/*
 * Programa 020 - Exemplo usando register
*/
const int IDADE_INICIAL=1;
int somaIdade(register int idade){
    static int somaIdades = IDADE_INICIAL;
    somaIdades = somaIdades + idade;
    return somaIdades;
}
int main(){
    int resultado;
    int idade;
    scanf("%d",&idade);
    resultado = somaIdade(idade);
    printf("Idade %d e soma = %d\n", idade, resultado);
    resultado = somaIdade(idade);
    printf("Idade %d e soma = %d\n", idade, resultado);
	return 0;
}
