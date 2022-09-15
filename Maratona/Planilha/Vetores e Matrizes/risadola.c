#include <stdio.h>
#include <string.h>
#define MAX 50

int isvogal(char c){
    if(c == 'a' || c == 'e' | c == 'i' | c == 'o' || c == 'u')
        return 1;
    else
        return 0; 
}

int main(){
    char sr[MAX], sv[MAX]; int i , n = 0;
    
    scanf("%s", sr);
    for(i = 0; sr[i]; i++) //Código para retirar as vogais da risada
        if(isvogal(sr[i])){
            sv[n] = sr[i];
            n++;
        }

for(i = 0; i < n/2; i++) //Realiza a verificaçãi explicitada pelo problema
    if(sv[i] != sv[n - i - 1]){
        printf("N\n");
        return 0;
    }

    printf("S\n");
    return 0;
}