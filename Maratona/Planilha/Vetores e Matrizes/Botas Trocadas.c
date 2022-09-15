#include <stdio.h>
#define MAX 10001

int main(){
    char Lb[MAX], l;    int n, Nb[MAX], i, j, aux = 0;
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
        scanf("%d %c", &Nb[i], &Lb[i]);

    for(i = 0; i < n; i++){
        if(Nb[i] == 0) // Para evitar uma verificação de par desnecessária
        ;
        else
            for(j = i + 1; j < n; j++)
                if(Lb[i] != Lb[j] && Nb[i] == Nb[j]){ // Se o nª da bota for igual e o lado for diferente já desconsidera a bota par
                    aux++;
                    Nb[j] = 0; //Desconsidera marcado ela como 0
                    break;// Já sai do 'for'
                }
    }
    printf("%d\n", aux);

    return 0;
}