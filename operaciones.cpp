#include <stdio.h>

int main()
{
    printf("La suma, resta, multiplicacion y division de dos numeros es:\n");

    int x;
    int y;
    int resultado;
    double cociente;

    printf("Ingresa el primer numero: \n");
    scanf("%d",&x);

    printf("Ingresa el segundo numero: \n");
    scanf("%d",&y);

    resultado = x + y;
    printf("El resultado de la suma es: %d,\n",resultado);

    resultado = x - y;
    printf("El resultado de la resta es: %d,\n",resultado);

    resultado = x * y;
    printf("El resultado de la multiplicacion es: %d,\n",resultado);

    cociente = x / y;
    printf("El resultado de la division es: %lf,\n",cociente);

return 0;
}