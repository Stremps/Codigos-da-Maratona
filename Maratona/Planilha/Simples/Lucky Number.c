#include <stdio.h>

int main(){
    long long int Number;
    int cont = 0;

    scanf("%lld", &Number);
    while(Number){
        if(Number%10 == 4 || Number%10 == 7) //Faz verificação se a casa decimal é lucky number
            cont++;
        Number/=10; //Remove a casa decimal verificada
    }
    if(cont == 4 || cont == 7)
        printf("YES\n");
    else
        printf("NO\n");
    
    return 0;
}