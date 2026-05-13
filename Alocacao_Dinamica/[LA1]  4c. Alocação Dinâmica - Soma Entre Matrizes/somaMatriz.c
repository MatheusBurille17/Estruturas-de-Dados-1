#include <stdio.h>
#include <stdlib.h>

// Função que soma duas matrizes
int** somaMatrizes(int **a, int **b, int l, int c) {
    int **resultado = (int**) malloc(l * sizeof(int*));

    for(int i = 0; i < l; i++) {
        resultado[i] = (int*) malloc(c * sizeof(int));

        for(int j = 0; j < c; j++) {
            resultado[i][j] = a[i][j] + b[i][j];
        }
    }

    return resultado;
}

int main() {
    int l, c;

    scanf("%d %d", &l, &c);

    int **a = (int**) malloc(l * sizeof(int*));
    for(int i = 0; i < l; i++) {
        a[i] = (int*) malloc(c * sizeof(int));
    }

    int **b = (int**) malloc(l * sizeof(int*));
    for(int i = 0; i < l; i++) {
        b[i] = (int*) malloc(c * sizeof(int));
    }

    for(int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    int **resultado = somaMatrizes(a, b, l, c);

    for(int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d", resultado[i][j]);

            if(j < c - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    for(int i = 0; i < l; i++) {
        free(a[i]);
        free(b[i]);
        free(resultado[i]);
    }

    free(a);
    free(b);
    free(resultado);

    return 0;
}
