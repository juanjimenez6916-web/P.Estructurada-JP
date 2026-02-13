#include <stdio.h>
#include <stdlib.h>

int main()
{
   int E;
   float P;
   int M;

   printf("Introduce tu edad:",E);
   scanf("%d",&E);
   printf("\nIntroduce tu promedio:",P);
   scanf("%f",&P);
   printf("\nIntroduce tu numero de materias reprobadas:",M);
   scanf("%d",&M);

   if(P>=90&&M==0){
    printf("Usted tiene beca");
   }
   else{
    if(M<=2){
        printf("Puede reinscribirse");
    }
    else{
        printf("Usted esta en situacion critica");
        }
   }
    return 0;
}
