#include <stdio.h>
#include <stdlib.h>

int main()
{
int M;
int P;
 printf("Escribe tu promedio:");
 scanf("%d",&P);
 printf("\nMaterias reprobadas:");
 scanf("%d",&M);

 if(P>=85&&M==0){
    printf("\nPuedes obtener beca");
 }
 else{
    printf("\nNo tienes beca");
 }


    return 0;
}
