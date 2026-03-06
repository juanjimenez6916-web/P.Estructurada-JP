#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp1, temp2;
    float temp [24];
    printf("Direccion de mem de 2 flotantes: &temp1:%i,&temp2 %i\n",&temp1,&temp2);
    printf("Direccion de temp[24]:%i\n",temp);
    printf("Direccion de &temp[24]:%i\n",&temp);







    return 0;
}
