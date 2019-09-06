#include <stdio.h>
/*
 * Programa 012 - Exemplo função
 * para receber dois números inteiros, valor1 e valor2
 * o parâmetro valor1 é um ponteiro
 * o parâmetro valor2 é uma variável normal
 * a função deve retornar a soma dos dois números
*/
int soma(int *valor1, int valor2){
    return *valor1+valor2;
}

int main(){
    int resultado;
    int valor1, valor2;
    scanf("%d%d",&valor1,&valor2);
    resultado = soma(&valor1, valor2);
    printf("Soma de %d e %d = %d", valor1, valor2, resultado);
	return 0;
}
