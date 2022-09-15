#include <stdio.h>

void print(int tamanho, int vetor[tamanho][tamanho]){
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++)
            printf("%d\n", vetor[i][j]);
    }
}

int main(){
    int tamanho, matriz [1000][1000];
    scanf("%d", &tamanho);
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++)
            scanf("%d", &matriz[i][j]);
    }
    print(tamanho, matriz);

    return 0;
}