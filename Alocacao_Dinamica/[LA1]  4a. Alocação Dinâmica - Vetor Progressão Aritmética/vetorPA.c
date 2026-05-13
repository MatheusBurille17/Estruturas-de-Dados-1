#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int * prog_arit(int n, int r){
    
    int *vetor = (int *) malloc(n * sizeof(int));
    
    for(int i = 0; i < n; i++){
        vetor[i] = i * r;
    }
    
    return vetor;
}


int main() {
    int n, r;
    
    scanf("%d %d", &n, &r);
    
    int *vetor = prog_arit(n, r);
    
    for(int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }
    
    free(vetor);
    
    return 0;
}