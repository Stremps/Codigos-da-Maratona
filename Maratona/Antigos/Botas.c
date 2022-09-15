#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int Tm[N+1], i, j, Par = 0; char Ld[N+1];

    for(i = 0; i < N; i++){
        scanf("%d %c", &Tm[i], &Ld[i]);
    }
    for(i = 0; i < N; i++){
        for(j = i + 1; j < N; j++){
            if(Tm[i] == Tm[j] && Ld[i] != Ld[j]){
                Par++;
                Tm[j] = 0;
                Ld[j] = '0';
                break;
            }
        }                                                                                                                
    }
    printf("%d\n", Par);
    return 0;
}