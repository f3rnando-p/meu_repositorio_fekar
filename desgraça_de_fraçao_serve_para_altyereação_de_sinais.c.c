#include <stdio.h>

int main(){
    //declaração de variáveis
    double s = 0.0;
    double sinal  = 1.0;

    for(int i = 1;i <= 10;i++){
        s += sinal*((double)i/(i*i));
        sinal = -sinal;
    }  
    printf("O valor da soma é: %.6lf\n", s);
    return 0;
}
