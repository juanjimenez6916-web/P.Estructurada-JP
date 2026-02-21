#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int suma= 0;
    int valor;
    printf("Cuantos numeros quieres sumar?: ");
    scanf("%d", &N);
    for (int i=1; i<=N; i++)
    {
        printf("Ingresa el numero %d: ", i);
        scanf("%d", &valor);
        suma+=valor;
    }
    printf("\nLa suma total es: %d\n", suma);
    return 0;
}
