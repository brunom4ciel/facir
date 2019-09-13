#include <stdio.h>
/*
 * Programa 017 - Exemplo com volatile
 * Nesse caso, o compilador verificará que pode fazer essa otimização, pois o valor de x nunca é alterado:
*/
int main(){
    volatile int x = 10;
    while(x == 10){
        //código
    }
    printf("%d", x);
    return 0;
}
