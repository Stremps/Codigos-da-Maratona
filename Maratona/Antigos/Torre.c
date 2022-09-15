#include <stdio.h>
#define MAX 1000

void lermatriz(int tamanho, int matriz[MAX][MAX]){
    int i, j;
    for(i = 0; i < tamanho; i++){
        for(j = 0; j < tamanho; j++)
            scanf("%d", &matriz[i][j]);
    }
}

void soma(int tamanho, int matriz[MAX][MAX], int linha[], int coluna[]){
    int i, j;
    for(i = 0; i < tamanho; i++){
        linha[i] = coluna [i] = 0;
        for(j = 0; j < tamanho; j ++){
            linha[i] += matriz[i][j];
            coluna[i] += matriz[j][i];
        }
    }
}

int verifica(int tamanho, int matriz[MAX][MAX], int linha[], int coluna[]){
    int maior = -1, aux, i, j;
    for(i = 0; i < tamanho; i++){
        for(j = 0; j < tamanho; j++){
            aux = linha[i] + coluna[j] - 2 * matriz[i][j];
            (aux > maior) ? maior = aux : aux;
        }
    }
    return maior;
}

// Vai gerar um for dentro de for dentro de for (algoritmo ruim D: ))
/*int peso(int tamanho, int matriz[MAX][MAX], int linha, int coluna){
    int soma = 0, i;
    for(i = 0; i < tamanho; i++)
            soma+=matriz[i][coluna];

    for(i = 0; i < tamanho; i++){
            soma+=matriz[linha][i];
    }
    return soma - 2*matriz[linha][coluna];
}

int soma(int tamanho, int matriz[MAX][MAX]){
    int maior = -1, aux, i, j;
    for(i = 0; i < tamanho; i++){
        for(j = 0; j < tamanho; j++){
            aux = peso(tamanho, matriz, i, j);
            (aux > maior) ? maior = aux : maior;
        }
    }
    return maior;
}
*/
int main(){
    int tamanho, matriz[MAX][MAX], linha[MAX], coluna[MAX];
    scanf("%d", &tamanho);
    lermatriz(tamanho, matriz);
    soma(tamanho, matriz, linha, coluna);
    printf("%d\n", verifica(tamanho, matriz, linha, coluna));

    return 0;
}