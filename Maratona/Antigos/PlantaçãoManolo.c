#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int Pl[N][N], i, j;
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            scanf("%d", &Pl[i][j]);
        }
    }
    int C, Cont, i1, i2, j1, j2, ct = 0;
        scanf("%d", &C);
    while(C != 0){
        scanf("%d %d %d %d", &i1, &j1, &i2, &j2);
        C--;
        for(i = i1-1; i < i2; i++){
            for(j = j1-1; j < j2; j++){
                ct = Pl[i][j] + ct;
                Pl[i][j] = 0;
            }
        }
    }
    printf("%d\n", ct);
    return 0;
}