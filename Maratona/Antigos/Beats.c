#include <stdio.h>

void ler(char vetor[]){
    for(int i = 0; i < 16; i+=4)
        scanf("%s", &vetor[i]);
}

void verificar(char vetor[], char base, int *contador){
    for(int i = 0; i < 16; i++){
        if(base == vetor[i])
            (*contador)++;
    }
}

int main(){
    char beats[100]; int dedos, contador;
    scanf("%d", &dedos);
    dedos= 2 * dedos;
    ler(beats);
    for(int i = 0; i < 16; i++){
        contador = 0;
        if(beats[i] != '.')
            verificar(beats, beats[i], &contador);
        if(contador > dedos)
            break;
    }
    (contador > dedos) ? printf("NO\n"):printf("YES\n");
    return 0;
}