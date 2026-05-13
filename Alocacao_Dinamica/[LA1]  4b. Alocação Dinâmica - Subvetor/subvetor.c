#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int* subvetor(int *v, int n, int ini, int fim){
    int tamanho = fim - ini + 1;

    int *sub = (int *) malloc(tamanho * sizeof(int));

    int j = 0;

    for(int i = ini; i <= fim; i++){
        sub[j] = v[i];
        j++;
    }

    return sub;
}

int main() {
    
    int n, ini, fim;
    
    scanf("%d", &n);
    
    int v[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    
    scanf("%d %d", &ini, &fim);
    
    int *novo = subvetor(v, n, ini, fim);
    
    for(int i = 0; i <= fim - ini; i++){
        printf("%d ", novo[i]);
    }

    free(novo);
    
    return 0;
}