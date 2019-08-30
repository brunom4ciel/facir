#include <stdio.h>
/*
 * Programa 004 - Exemplo de entrada e saida de dados
 * para receber dois valores, nome e sobrenome
 * após leitura os valores são impressos na tela do usuário
*/
int main(){
    char nome[10];// nome da pessoa
    char sobrenome[10];//sobrenome da pessoa
    printf("saida de dados, digite seu nome: ");
    fgets(&nome, 10, stdin); // entrada de dados
    printf("saida de dados, digite seu sobrenome: ");
    fgets(&sobrenome, 10, stdin);// entrada de dados
    printf("saida de dados na tela: bem vindo, %s %s\n", nome, sobrenome);
	return 0;
}