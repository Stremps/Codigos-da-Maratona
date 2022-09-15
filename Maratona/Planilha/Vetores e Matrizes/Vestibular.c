#include <stdio.h>
#define MAX 81

int main(){
    int n, i, aux; char s[MAX], r;

    scanf("%d%*c%s%*c", &n, s);
    for(i = aux = 0; i < n; i++){
        scanf("%c", &r);
        (s[i] == r) ? aux++ : 0;
    }
    printf("%d\n", aux);

    return 0;
}