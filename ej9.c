#include <stdio.h>
int main (){
int notas, rep , alumnos , alum;
alumnos=0;
alum=0;
while (1)
{
    printf("ingrese su nota \n");
    scanf("%d",&notas);
    if (notas >= 50)
    {
        alumnos++;

    }else
    {
        alum++;
    }
    
   printf("MENU\n");
   printf("1)para otra nota \n2)para salir\n");
   scanf("%d",&rep);
   if (rep == 2) {
            break; // Salimos del bucle si el usuario elige salir (rep == 2)
        }
}
printf("el total de alumnos asistidos es de:%d\n ",alum+alumnos);
printf("aprobados%d :\n" ,alumnos);
printf("desaprobados%d :\n",alum);

    return 0;
}