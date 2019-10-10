#include <stdio.h>
int mcm(int, int);

int main(){
    int num1, num2;
    int res;

    printf("Introduzca valor de M: ");
    scanf("%i", &num1);

    printf("Introduzca valor de N: ");
    scanf("%i", &num2);

    if (num2 > num1 ){
        res = mcm(num2,num1);
    } else { 
        res = mcm(num1,num2);
    }

    printf("El MCM de %i y %i es: %i", num1, num2, res);

    return 0;
}

int mcm(int m, int n) {
    if (n == 0) return m;
    return mcm(n, m%n);
}