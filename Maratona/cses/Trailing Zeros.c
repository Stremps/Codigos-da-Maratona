#include <stdio.h>

int main(){
    long long int n, i = 5, aux = 0;
    scanf("%lld", &n);

    while(n >= i){
        aux+=(n/i);
        i*=5;
    }

    printf("%lld\n", aux);
    return 0;
}