#include <stdio.h>
#include <stdlib.h>

int main()
{
    int e ;
    printf("Escribe tu edad:",e);
    scanf("%d",&e);

    if(e>17){
      printf("Eres mayor de edad");
    }
    else{
      printf("Eres menor de edad");
    }
    return 0;
}
