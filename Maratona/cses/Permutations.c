#include <stdio.h>
#define MAX 1000000

void print_vet(long int vetor[], long int tamanho){
    int i;
    for(i = 0; i < tamanho; i++)
        printf("%ld ", vetor[i]);
}

int main(){
    long int n, vp[MAX/2], vi[MAX/2], i, im, pa;

    scanf("%ld", &n);
    if(n < 4 && n != 1)
        printf("NO SOLUTION\n");
    else{
        for(i = 1, im = 0, pa = 0; i <= n; i++){
            if(i%2){
                vp[pa] = i;
                pa++;
            }
            else{
                vi[im] = i;
                im++;
            }
        }
        print_vet(vi, im);
        print_vet(vp, pa);
        printf("\n"); 
    }
    return 0;
}