#include <stdio.h>
#include <string.h>
#define MAX 17

int ver(char s[], char l, int i, int k){
    int con;
    for(con = 0; s[i]; i++){
        if(l == s[i]){
            con++;
            s[i] = '.';
        }
        if(con > k)
            return 1;
    }
    return 0;
}

int main(){
    char vetor[MAX], s[5]; int k, i;
    scanf("%d%*c", &k);
    k*=2;

    for(i = 0; i < 4; i++){
        scanf("%s%*c", s);
        strcat(vetor, s);
    }

    for(i = 0; vetor[i]; i++)
        if(vetor[i] == '.')
        ;
        else if(ver(vetor, vetor[i], i, k)){
            printf("NO\n");
            return 0;
        }
    printf("YES\n");
    return 0;
}