#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int i;

    printf("Cuantas temperaturas se va a registrar:");
    scanf("%d",&N);

    float temp [N];

    for (int i = 0; i<N; i++)
    {
        printf("\n La temperatura %d es:",i+1);
        scanf("%f",&temp[i]);
    }
    for (i=0; i<N; i++)
    {
        printf("\nLa temperatura %d es: %.2f",i+1,temp[i]);
    }





    return 0;
}
