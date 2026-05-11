#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct {
    char nome[255];
    int saquesTotal;
    int bloqueiosTotal;
    int ataquesTotal;
    int saquesSucesso;
    int bloqueiosSucesso;
    int ataquesSucesso;
}Jogador;


void preencherJogador(Jogador *j){
    scanf("%s", j->nome);
    scanf("%d %d %d", &j->saquesTotal, &j->bloqueiosTotal, &j->ataquesTotal);
    scanf("%d %d %d", &j->saquesSucesso, &j->bloqueiosSucesso, &j->ataquesSucesso);
}

int main() {

    int N, totalSaques = 0, totalBloqueios = 0, totalAtaques = 0, sucessoSaques = 0, sucessoBloqueios = 0, sucessoAtaques = 0;

    scanf("%d", &N);
    Jogador time[N], *j;

    for(int i = 0; i < N; i++){
        j = &time[i];
        preencherJogador(j);
    }

    for(int i = 0; i < N; i++){
        totalSaques += time[i].saquesTotal;
        totalBloqueios += time[i].bloqueiosTotal;
        totalAtaques += time[i].ataquesTotal;
        sucessoSaques += time[i].saquesSucesso;
        sucessoBloqueios += time[i].bloqueiosSucesso;
        sucessoAtaques += time[i].ataquesSucesso;
    }

    printf("Pontos de Saque: %.2f%%\n", (float)sucessoSaques/totalSaques * 100);
    printf("Pontos de Bloqueio: %.2f%%\n", (float)sucessoBloqueios/totalBloqueios * 100);
    printf("Pontos de Ataque: %.2f%%\n", (float)sucessoAtaques/totalAtaques * 100);

    return 0;
}
