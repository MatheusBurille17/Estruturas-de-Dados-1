#include <stdio.h>
#include <string.h>


    typedef struct {
        char modelo[50];
        char fabricante[20];
        int ano_fab;
        int ano_mod;
        char combustivel[20];
        int km;
        float preco;
    } Carro;

    Carro cadastrarCarro(void){
        Carro c;
        scanf(" %s %s %d %d %s %d %f", 
          c.modelo, 
          c.fabricante, 
          &c.ano_fab, 
          &c.ano_mod, 
          c.combustivel, 
          &c.km, 
          &c.preco);
          
        return c;
    }
    
    void imprimirCarro(Carro c){
        printf("Modelo: %s | Fab: %s | Preco: %.2f\n", c.modelo, c.fabricante, c.preco);
    }
    
    float precoMedio(Carro v[], int n){
        float soma = 0;
        for(int i = 0; i < n; i++){
            soma += v[i].preco;
        }
        return soma/n;
    }
    
    void filtrarPorFabricante(Carro v[], int n, char fab[]){
        for(int  i= 0; i < n; i++){
            if(strcmp(v[i].fabricante, fab) == 0){
                printf("Modelo: %s\n", v[i].modelo);
            }
        }
    }

int main(void){
    
    int qntcarros = 5;
    Carro frota[qntcarros];
    char buscaFab[50];
    int i;
    
    for(i = 0; i < qntcarros; i++){
        frota[i] = cadastrarCarro();
    }
    
    
    printf("--- Lista de Carros ---\n");
    for(i = 0; i < qntcarros; i++) {
        imprimirCarro(frota[i]);
    }
    
    printf("Preco Medio: %.2f\n", precoMedio(frota, qntcarros));
    
    // busca carros do fabircante informado
    scanf("%s", buscaFab);
    
    printf("Carros do fabricante %s:\n", buscaFab);
    filtrarPorFabricante(frota, qntcarros, buscaFab);

    
    return 0;
}