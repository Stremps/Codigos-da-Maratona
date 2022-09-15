#include <stdio.h>
#include <string.h>
#define MAX 1010

int main(){
    char s[MAX];
    int rept, t;

    scanf("%d", &rept);
    while(rept--){
        scanf("%s", s);
        if(s[strlen(s) - 1] == 'o')
            printf("FILIPINO\n");
        else if(s[strlen(s) - 1] == 'a')
            printf("KOREAN\n");
        else
            printf("JAPANESE\n");
    }
    return 0;
}