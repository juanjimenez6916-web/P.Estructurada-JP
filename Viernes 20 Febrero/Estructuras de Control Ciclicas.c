#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion;
    int M;
    float C;
    float P=0;
    int i=1;
    int aprobado=0;
    int reprobado=0;

    do
    {
        printf("\n------CALCULADORA DE PROMEDIOS------\n");
        printf("\n1.Presione 1 para calcular promedio\n");
        printf("\n2.Presione 2 para salir\n");
        printf("\nElija una opcion por favor:");
        scanf("%d",&opcion);

        if(opcion==1)
        {
            P = 0;
            aprobado=0;
            reprobado=0;
            printf("\n-------------------------------------\n");
            printf("Ingrese el numero de materias por favor:");
            scanf("%d",&M);
            if(M>0)
            {
                for(i=1; i<=M; i++)
                {
                    printf("\n-------------------------------------\n");
                    printf("Ingrese tu calificacion en formato de 0 a 100:");
                    scanf("%f",&C);
                    if(C>=0&&C<=100)
                    {
                        P=P+C;
                     if(C >= 60)
                        {
                            aprobado++;
                        }
                        else
                        {
                            reprobado++;
                        }
                    }
                    else
                    {
                        printf("\nCalificacion no permitida o erronea. Intenta de nuevo\n");
                        i--;
                    }

                }
                printf("\n=====================================\n");
                printf("El promedio es: %.2f\n",P/M);
                printf("Materias aprobadas: %d\n", aprobado);
                printf("Materias reprobadas: %d\n", reprobado);
                printf("Porcentaje de aprobacion: %.2f%%\n", (aprobado * 100.0) / M);
                printf("Porcentaje de reprobacion: %.2f%%\n", (reprobado * 100.0) / M);
                printf("\n=====================================\n");
            }
            else
            {
                printf("\nError de datos. Intenta de nuevo\n");
            }
        }
        else if (opcion != 2)
        {
            printf("\nError de datos. Intenta de nuevo\n");
        }
    }
    while(opcion !=2);

    printf("\n=====================================\n");
    printf("Gracias por visitarnos");
    printf("\n=====================================\n");

    return 0;
}
