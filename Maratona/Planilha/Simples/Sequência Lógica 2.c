#include <stdio.h>

int main(){
    int n, c, i;

    scanf("%d %d", &c, &n);

    for(i = 1; i <= n; i++){
        if(i%c)
            printf("%d ", i);
        else
            printf("%d\n", i);
    }
    return 0;
}