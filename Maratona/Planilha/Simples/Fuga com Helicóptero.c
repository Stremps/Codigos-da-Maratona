#include <stdio.h>

int main(){
    int H, P, F, D;
    scanf("%d %d %d %d", &H, &P, &F, &D);
    for(; ;(D == 1) ? F++: F--){ // A utilização de 'for' se dá, pois, o acrescimo em F só vai ocorrer a partir da segunda repetição
        if(F == 16) F = 0;
        if(F == -1) F = 15;
        if(F == H){
            printf("S\n");
            break;
        }
        if(F == P){
            printf("N\n");
            break;
        }
    }
    return 0;
}