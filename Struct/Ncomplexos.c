#include <stdio.h>
#include <math.h>

    typedef struct {
        float real; 
        float img;
    } NComplexo;
    
    NComplexo inicializa(float num, float numI){
      NComplexo c;
      c.real = num;
      c.img = numI;
    
      return c;
    }
    
    NComplexo soma(NComplexo c1, NComplexo c2){
        NComplexo c_soma;
        c_soma.real = c1.real + c2.real;
        c_soma.img = c1.img + c2.img;
        
        return c_soma;
    }
    
    NComplexo subtrai(NComplexo c1, NComplexo c2){
        NComplexo c_sub;
        c_sub.real = c1.real - c2.real;
        c_sub.img = c1.img - c2.img;
        
        return c_sub;
    }

    NComplexo multiplica(NComplexo c1, NComplexo c2){
        NComplexo c_mult;
         c_mult.real = (c1.real*c2.real) - (c1.img*c2.img);
         c_mult.img = (c1.real*c2.img) + (c1.img*c2.real);
         
         return c_mult;
    }
    
    NComplexo divide(NComplexo c1, NComplexo c2){
    NComplexo c_div;

    double denom = pow(c2.real, 2) + pow(c2.img, 2);

    c_div.real = (c1.real * c2.real + c1.img * c2.img) / denom;
    c_div.img  = (c1.img * c2.real - c1.real * c2.img) / denom;

    return c_div;
    }
    
    float modulo(NComplexo c) {
        return sqrt(c.real * c.real + c.img * c.img);
    }
    
    NComplexo conjugado(NComplexo c) {
        NComplexo c_conj;
        c_conj.real = c.real;
        c_conj.img = -c.img;
        return c_conj;
    }
    
    void imprime(NComplexo c){
        printf(" %.2f + %.2fi\n", c.real, c.img);
    }

    int main(void){
        
        float num1, numI1, num2, numI2;
        
        scanf("%f %f %f %f", &num1, &numI1, &num2, &numI2);
       
        NComplexo c1 = inicializa(num1, numI1);
        NComplexo c2 = inicializa(num2, numI2);
        
        printf("Soma:");
        imprime(soma(c1, c2));
        printf("Subtracao:");
        imprime(subtrai(c1, c2));
        printf("Multiplicacao:");
        imprime(multiplica(c1, c2));
        printf("Divisao:");
        imprime(divide(c1, c2));
        printf("Modulo C1: %.2f\n", modulo(c1));
        printf("Conjugado C1:");
        imprime(conjugado(c1));
        
        return 0;
    }
    
    
    
    
    