#include <stdio.h>

float calculos(float *pa, float *pb, float *pc){
    *pa = (*pa) * 2;
    *pb = (*pb) * 2;
    *pc = (*pc) * 2;
    
    return *pa + *pb + *pc;
}

int main() {
    int N;
    float A, B, C;
    
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++){
        scanf("%f %f %f", &A, &B, &C);
    
        printf("A=%.1f B=%.1f C=%.1f SOMA=%.1f\n", A, B, C, calculos(&A, &B, &C));
    }

    return 0;
}