#include <stdio.h>
#define MAX 1000000

int verifica(long long int numero, long long int vetor[], long long int *tamanho){
    long long int i;
    for(i = 0; i < *tamanho; i++){
        if(numero == vetor[i]){
            vetor[i] = vetor[*tamanho-1];
            *tamanho--;
            return 0;
        }
    }
    return 1;
}

int main(){
    long long int n, v[MAX], i, tamanho;

    scanf("%lld", &tamanho);
    n = tamanho - 1;
    for(i = 0; i < n; i++)
        scanf("%lld", &v[i]);
    for(i = 1; i <= tamanho ; i++){
        if(verifica(i, v, &n)){ //Faz a verificão numero por número
            printf("%lld\n", i);
            break;
        }
    }   
    return 0;
}
/*
    Realiza a verificação número por número e quando encontra o número que condiz dentro
    do vetor em que guarda os números que foram entregues pelo exercício já para e vai para
    o próximo da lista, mas está dando time limit (for dentro de for)
*/