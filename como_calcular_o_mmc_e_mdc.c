//1) Elabore um programa em C que obtenha o mínimo múltiplo comum (MMC) entre dois números.
#include <stdio.h>
int main() {
    int n1, n2, a, b, mmc, mdc, resto;
    printf("Entre com o primeiro numero: ");
    scanf("%d", &n1);
    printf("Entre com o segundo numero: ");
    scanf("%d", &n2);

    a = n1;
    b = n2;

    while(b != 0){
        resto = a % b;
        a = b;
        b = resto;
    }
    mdc = a;
    mmc = (n1*n2)/mdc;

    printf(" O mdc entre %d e %d e %d\n e mmc é %d: ", n1, n2, mdc, mmc);
    return 0;





}
