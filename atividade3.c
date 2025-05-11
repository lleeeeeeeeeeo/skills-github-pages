#include <stdio.h>

int main() {
    int nota1 =70, nota2 = 85, nota3 = 100;
    float peso1 =7, peso2 = 8.5, peso3=10;
    float media =(nota1*peso1+nota2*peso2+nota3*peso3)/(peso1+peso2+peso3);
    printf("nota1:%d\nnota2:%d\nnota3:%d\n",nota1,nota2,nota3);
    printf("peso1:%.0f\npeso2:%.1f\npeso3:%.0f\n",peso1,peso2,peso3);
    printf("medio:%.2f",media);
    return 0;
}

