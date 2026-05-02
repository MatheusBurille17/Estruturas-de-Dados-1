#include <stdio.h>
#include <string.h>

void function(char c[], char caractere, int *pi, float *pf){
    int cont = 0;
    for(int i = 0; i < strlen(c); i++){
        if(c[i] == caractere){
            cont++;
        }
    }
    
    *pi = cont;
    *pf = (float)cont / strlen(c);
}

int main() {
    char c[50];
    char caractere;
    int inteiro;
    float taxa;
    
    scanf(" %[^\n] \n %c", c, &caractere);
    
    function(c, caractere, &inteiro, &taxa);
    
    printf("%d\n%.2f", inteiro, taxa);

    return 0;
}