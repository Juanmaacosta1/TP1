#include <stdio.h>
int main () {
    int num , fac;

    printf ("ingrese num \n");
    scanf ("%d" , &num);
fac = num ;
for (int i = 1; i < num ; i++)
{
     fac*=i ; // Multiplicamos fac por i en cada iteración

}
   printf ("su num es %d y es %d ", num , fac);
    return 0;
}
