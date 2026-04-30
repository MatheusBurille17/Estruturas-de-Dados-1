#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void frac(float n, int *in, float *fr){
    *in = n;
    *fr = n - *in;
}


int main() {
    float N, f;
    int i, rep;
    
    scanf("%d", &rep);
    printf("\n");
    
    for(int j = 0; j < rep; j++){
        scanf("%f", &N);
        printf("\n");
        
        frac(N, &i, &f);
        
        printf("N=%.3f I=%d F=%.3f\n", N, i, f);
    }
    
    return 0;
}