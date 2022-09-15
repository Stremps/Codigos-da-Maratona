#include <stdio.h>

int main(){
    long long int n, i, j;
    scanf("%lld", &n);

    while(n--){
        scanf("%lld %lld", &i, &j);
        if(i > j){
            if(i%2)
                printf("%lld\n", (i-1)*(i-1) + j );
            else
                printf("%lld\n", i*i - j + 1);
        }
        else{
            if(j%2)
                printf("%lld\n", j*j - i + 1);
            else
                printf("%lld\n", (j-1)*(j-1) + i );
        }
    }
    return 0;
}