#include <stdio.h>
#define MAX 100000

int main(){
    long long int n, i, aux, soma = 0;

    scanf("%lld", &n);
    for(i = 0; i < n - 1; i++){
        scanf("%lld", &aux);
        soma+=aux; //Somatoria de todos os números que não estão faltando
    }
    aux = n*(n+1)/2; //Somatoria de todos inteiros até um número n

    printf("%lld\n", aux - soma); //A subtração ira retornar o número que está faltando

    return 0;
}