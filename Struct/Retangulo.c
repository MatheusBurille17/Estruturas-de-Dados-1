#include <stdio.h>

    //struct de retangulo
    typedef struct {
        float base;
        float altura;
    } Retangulo ;

    //função que retorna a struct
    Retangulo inicializa(float b, float h){
      Retangulo r;
      r.base = b;
      r.altura = h;
    
      return r;
    }

    //Exibe os dados
    void imprime(Retangulo r){
        printf("Base: %.2f, Altura: %.2f\n", r.base, r.altura);
    }

    // Calcula e retorna a área (base * altura).
    float calcularArea(Retangulo r){
      return r.base * r.altura;
    }
    
    //Retorna retangulo somados
    Retangulo somarRetangulos(Retangulo r1, Retangulo r2){
      Retangulo r3;
      r3.base = r1.base + r2.base;
      r3.altura = r1.altura + r2.altura;
      
      return r3;
    }

    int main() {
        float b1, h1, b2, h2;
        
        // 1. Leitura (Input)
        scanf("%f %f %f %f", &b1, &h1, &b2, &h2);
    
        // 2. Processamento (Usando as funções pedidas)
        Retangulo r1 = inicializa(b1, h1);
        Retangulo r2 = inicializa(b2, h2);
        Retangulo r3 = somarRetangulos(r1, r2);
    
        // 3. Saída (Output exatamente como no caso de teste)
        printf("Retangulo 1: ");
        imprime(r1);
        printf("Area 1: %.2f\n", calcularArea(r1));
    
        printf("Retangulo 2: ");
        imprime(r2);
        printf("Area 2: %.2f\n", calcularArea(r2));
    
        printf("Soma: ");
        imprime(r3);
        printf("Area Soma: %.2f\n", calcularArea(r3));
    
        return 0;
}