#include <stdio.h>
#define MODULO 1000000007 /*Alguns programas retornam um valor muito alto como resposta, só um algoritimo muito eficiênte poderia
                            responder a questão, então pedem essa notação (modulo = resto - Você estava certo FTCC)
                            https://www.geeksforgeeks.org/modulo-1097-1000000007/ */
int main(){
    long long int n, bits = 1;

    scanf("%lld", &n);
    while(n--){
        bits*=2;
        bits%=MODULO;
    }
    printf("%lld\n", bits);
    return 0;
}