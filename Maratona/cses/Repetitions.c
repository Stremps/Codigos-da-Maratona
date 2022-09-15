#include <stdio.h>
#define MAX 1000000

int main(){
    char DNA[MAX], c;
    int aux , Mrep, i;

    scanf("%s", DNA);
    for(i = aux = Mrep = 0; DNA[i] != '\0'; i++){
        if(c == DNA[i])
            aux++;
        else{
            c = DNA[i];
            if(Mrep < aux)
                Mrep = aux;
            aux = 1;
        }
    }
    if(Mrep < aux)
        Mrep = aux;
    printf("%d\n", Mrep);
}