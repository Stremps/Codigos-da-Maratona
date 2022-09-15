#include <stdio.h>
#define MAX 51

int colher(int p[][MAX], int xo, int yo, int xf, int yf){
    int s = 0, i, j;
    
    for(i = xo; i <= xf; i++)
        for(j = yo ; j <= yf; j++){
            s+=p[i][j];
            p[i][j] = 0;
        }
    return s;
}

int main(){
    int plant[MAX][MAX], n, rept, soma = 0, i, j, li, ci, lf, cf;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &plant[i][j]);
    
    scanf("%d", &rept);
    while(rept--){
        scanf("%d %d %d %d", &li , &ci, &lf, &cf);
        soma+=colher(plant ,li - 1, ci - 1, lf - 1, cf - 1);
    }
    printf("%d\n", soma);

    return 0;
}