#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"");

    float a, b, c, DELTA, x1, x2;
    printf("para resolver a equacao de 2º GRAU informe o valor de a: ");
    scanf("%f",&a);
    printf("informe agora o valor de b: ");
    scanf("%f",&b);
    printf("agora o valor de c: ");
    scanf("%f",&c);

    if (a != 0) {
        DELTA = (b*b) -4*a*c;
        if (DELTA == 0) {
        x1 = (-b +sqrt(DELTA))/(2*a);
        printf("Delta igual a 0 \n");
        printf("x1 e x2 = %.2f", x1);
            } else {
                if (DELTA > 0) {
                x1 = (-b + sqrt(DELTA))/(2*a);
                x2 = (-b - sqrt(DELTA))/(2*a);
        printf("Delta maior que 0 \n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
                } else {
        printf("Delta menor que 0\n");
        printf("Não possui raiz real !");
                        }
    }
                } else {
        printf("Não é uma equação do segundo grau \n");
        printf("a não pode ser 0");
                        }
    return 0;
}

