#include <stdio.h>
#define MAX 91

int ver(int v[], int tamanho, int n){
    int i, maior = v[tamanho - 1];
    for(i = 0; i < tamanho; i++)
        if(n == v[i] || (maior - i) == n)
            return 0;
    return 1;
}

void ordena(int v[], int tamanho){
    int i, j, aux;
    for(i = 0; i < tamanho; i++){
        for(j = i + 1; j < tamanho; j++)
            if(v[i] > v[j]){
                aux = v[j];
                v[j] = v[i];
                v[i] = aux;
            }
    }
}

int bingo(int N, int B){
    int i, j, aux, v[MAX];
    for(i = 0; i < B; i++){
        scanf("%d", &v[i]);
    }

    ordena(v, B);

    if(v[B - 1] != N){
        printf("N1\n");
        return 0;
    }

    for(i = 0; i < N; i++){
        if(ver(v, B, i))
            printf("N2\n");
            return 0;
    }

    printf("Y\n");
    return 0;
}

int main(){
    int max, tamanho;

    while(scanf("%d %d", &max, &tamanho) != 0 && max != 0 && tamanho != 0){
        bingo(tamanho, max);
    }
    return 0;
}