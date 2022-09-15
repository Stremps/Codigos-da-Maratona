#include <stdio.h>

int main(){
    long long int aux, x, tamanho, moves = 0;

    scanf("%lld", &tamanho);
    scanf("%lld", &aux);
    for(int i = 0; i < tamanho - 1; i++){
        scanf("%lld", &x);
        if(x < aux)
            moves+=(aux-x);
        else
            aux = x;
    }

    printf("%lld\n", moves);
}