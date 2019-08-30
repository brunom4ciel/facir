#include <stdio.h>
/*
 * Programa 002 - Exemplo de entrada e saida de dados
 * para receber dois valores, nome e sobrenome
 * após leitura os valores são impressos na tela do usuário
*/
int main(){
    char nome[10];// nome da pessoa
    char sobrenome[10];//sobrenome da pessoa
    printf("saida de dados, digite seu nome: ");
    scanf("%s", nome); // entrada de dados
    scanf("% *[^\n]% *c");// para limpar o buffer de entrada - escreva tudo junto que tem dentro da string
    printf("saida de dados, digite seu sobrenome: ");
    scanf("%s", sobrenome);// entrada de dados
    printf("saida de dados na tela: bem vindo, %s %s\n", nome, sobrenome);
	return 0;
}