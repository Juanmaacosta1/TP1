#include <stdio.h>

int main(){
    int edad,a,m,d,anac,mnac,dnac;
    //fecha actual
    printf("Ingresa el anio actual\n");
    scanf("%d",&a);
    printf("Ingresa el mes actual\n");
    scanf("%d",&m);
    printf("Ingresa el dia actual\n");
    scanf("%d",&d);
    
    //informacion
    printf("Ingresa tu anio de nacimiento\n");
    scanf("%d",&anac);
    printf("Ingresa tu mes de nacimiento\n");
    scanf("%d",&mnac);
    printf("Ingresa tu dia de nacimiento\n");
    scanf("%d",&dnac);
    edad=a-anac;
    if (mnac>m || (mnac==m && dnac>d))
    {
        edad--;
    }
    
    printf("Tenes %d anios",edad);
    return 0;
}