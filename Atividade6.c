#include <stdio.h>

int main() {
   float sal = 1500, grt = sal*0.07, imp = sal*0.05, salreceber= sal+grt-imp;
   printf("salreceber:%.2f",salreceber);

    return 0;
}
