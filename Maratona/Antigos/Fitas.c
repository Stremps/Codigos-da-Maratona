#include <stdio.h>
#define MAX 10000

 void ler(int vetor[], int tamanho){
    for(int i = 0; i < tamanho; i++)
        scanf("%d", &vetor[i]);
}

void cor(int vetor[], int posi, int tamanho){
    int i;
    for(i = 1; i <= tamanho; i++){
        if((vetor[posi+i] == 0 && posi+i < tamanho )|| (vetor[posi-i] == 0 && posi-i >= 0)){
            if(i < 9)
                vetor[posi] = i;
            else
                vetor[posi] = 9;
            break;
        }
    }
}

void verifica(int vetor[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        if(vetor[i] == -1)
            cor(vetor, i, tamanho);
    }
}

void show(int vetor[], int n){
    for(int i = 0; i < n - 1; i++)
        printf("%d ", vetor[i]);
    printf("%d\n", vetor[n-1]);
}

int main(){
    int vetor[MAX], n;
    scanf("%d", &n);
    ler(vetor, n);
    verifica(vetor, n);
    show(vetor, n);
    
    return 0;
}