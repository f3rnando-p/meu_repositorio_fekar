#include <stdio.h>

int main(){

    double s = 0.0;
  

    for(int d = 1;d <= 50;d++){
        int num = 2 *d -1;
        s += (double)num/d;
        num += 2;
    }  
    printf("O valor da soma é: %.2f\n", s);
    return 0;
}
