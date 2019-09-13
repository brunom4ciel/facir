#include <stdio.h>
/*
 * Programa 021 - Exemplo vetor
 *
 * uso de vetores
*/
const int TOTAL = 3;//tamanho do vetor

int main(){
    char nomes[TOTAL][10];
    float notas[TOTAL];
    int i;
    int n = sizeof(notas)/sizeof(notas[0]);//determina o tamanho do vetor dinamicamente
    for(i = 0; i < n; i++){
        scanf("%s", &nomes[i]);
        scanf("%f", &notas[i]);
    }
    printf("Nome\tNota\n");
    for(i = 0; i < n; i++){
       printf("%s\t%.2f\n", nomes[i], notas[i]);
    }
	return 0;
}

