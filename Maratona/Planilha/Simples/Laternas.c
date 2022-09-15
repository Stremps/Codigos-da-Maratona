#include <stdio.h>

int main(){
    int rept, i1 = 0, i2 = 0, n;
    scanf("%d", &rept);
    
    while(rept--){
        scanf("%d", &n);
        if(n == 2)
            i2++;
        i1++; //i1 sempre vai se r alterado, não importa qual interruptor seja selecionado
    }
    printf("%d\n%d\n", i1%2, i2%2); // a variáve%2 sempre vai retornar 1 ou 0
}