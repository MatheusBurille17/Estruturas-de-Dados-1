#include <stdio.h>

typedef struct {
    int dados[10][10];
    int linhas;
    int colunas;
} Matriz;

Matriz inicializa(int l, int c) {
    Matriz m;
    m.linhas = l;
    m.colunas = c;
    return m;
}

Matriz preenche(int l, int c) {
    Matriz m = inicializa(l, c);

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &m.dados[i][j]);
        }
    }

    return m;
}

void imprime(Matriz m) {
    for (int i = 0; i < m.linhas; i++) {
        for (int j = 0; j < m.colunas; j++) {
            printf("%d ", m.dados[i][j]);
        }
        printf("\n");
    }
}

void soma(Matriz m1, Matriz m2) {
    Matriz r = inicializa(m1.linhas, m1.colunas);

    for (int i = 0; i < m1.linhas; i++) {
        for (int j = 0; j < m1.colunas; j++) {
            r.dados[i][j] = m1.dados[i][j] + m2.dados[i][j];
        }
    }

    printf("Soma:\n");
    imprime(r);
}

void subtrai(Matriz m1, Matriz m2) {
    Matriz r = inicializa(m1.linhas, m1.colunas);

    for (int i = 0; i < m1.linhas; i++) {
        for (int j = 0; j < m1.colunas; j++) {
            r.dados[i][j] = m1.dados[i][j] - m2.dados[i][j];
        }
    }

    printf("Subtracao:\n");
    imprime(r);
}

void transposta(Matriz m) {
    Matriz t = inicializa(m.colunas, m.linhas);

    for (int i = 0; i < m.linhas; i++) {
        for (int j = 0; j < m.colunas; j++) {
            t.dados[j][i] = m.dados[i][j];
        }
    }

    printf("Transposta M1:\n");
    imprime(t);
}

int main() {
    int l1, c1, l2, c2;

    scanf("%d %d", &l1, &c1);
    Matriz m1 = preenche(l1, c1);

    scanf("%d %d", &l2, &c2);
    Matriz m2 = preenche(l2, c2);

    soma(m1, m2);
    subtrai(m1, m2);
    transposta(m1);

    return 0;
}