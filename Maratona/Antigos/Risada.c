#include <stdio.h>
#include <string.h>

int main(){
    char R[51], R1[51], R2[51]; int Tm, J = 0;
    scanf("%s", R);

    Tm = strlen(R);

    for(int i = 0; i <= Tm; i++){
        if (R[i] == 'a' || R[i] == 'e' || R[i] == 'i' || R[i] == 'o' || R[i] == 'u'){
            R1[J] = R[i];
            J++;
        }
        R1[J] = '\0';
    }
    J = 0;
    for(int i = Tm; i >= 0; i--){
        if(R[i] == 'a' || R[i] == 'e' || R[i] == 'i' || R[i] == 'o' || R[i] == 'u'){
            R2[J] = R[i];
            J++;
        }
        R2[J] = '\0';
    }
    if (strcmp(R1,R2) == 0)
        printf("S\n");
    else
        printf("N\n");
    return 0;
}