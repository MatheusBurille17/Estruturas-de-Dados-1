#include <stdio.h>
#include <math.h>

    typedef struct {
        float lado;
    } Triangulo ;
    
    Triangulo inicializa(float l){
        Triangulo t;
        t.lado = l;
        
        return t;
    }
    
    float calcularAltura(Triangulo t){
        return (t.lado*sqrt(3))/2;
    }
    
    float calcularArea(Triangulo t){
        return (pow(t.lado, 2)*sqrt(3))/4;
    }
    
    float calcularPerimetro(Triangulo t){
        return t.lado*3;
    }
    
    
    
    int main(void){
        float l;
        
        scanf("%f", &l);
        
        Triangulo t = inicializa(l);
        
       printf("Lado: %.2f\n", t.lado);
       printf("Altura: %.2f\n", calcularAltura(t));
       printf("Area: %.2f\n", calcularArea(t));
       printf("Perimetro: %.2f", calcularPerimetro(t));
        
        return 0;
    }