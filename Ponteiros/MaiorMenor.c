#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void troca (int *A, int *B){
    int aux;
    if(*A<*B){
        aux = *A;
        *A = *B;
        *B = aux;
    }
}

int main() {
    int N, num1, num2;
    
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++){
        
        do{
            scanf("%d %d", &num1, &num2);
	    }while(num1<=-100 && num1>=100 && num2<=-100 && num2>=100);
	        
	    troca(&num1, &num2);
	        
	   printf("A=%d B=%d\n", num1, num2);
    }
	    
	return 0;

}