#include <stdio.h>
#define MAX 200000
 
int ver(long long int n, long long int v[], long long int tamanho){
    int i;
    for(i = 0; i < tamanho; i++)
        if(n == v[i])
            return 0;
    return 1;
}
 
int main(){
    long long int rept, n, vetor[MAX], i = 0;
    scanf("%lld", &rept);
    
    while(rept--){
        scanf("%lld", &n);
        if(ver(n,vetor, i)){
            vetor[i] = n;
            i++;
        }
    }
    printf("%lld\n", i);
 
    return 0;
}