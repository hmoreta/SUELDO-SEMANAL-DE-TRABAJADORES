#include<stdio.h>
void main(){

int i,n;
float ht,ph,sueldosemanal,tot;

printf("Ingrese el numero de trabajadores: ");
scanf("%i", &n);

n=n+1;

for(int i=1; i<n; i++)
      {
        printf("Ingrese las horas trabajadas del empleado %i ", i);
        scanf("%f", &ht);
        printf("Ingrese el valor por hora: ");
        scanf("%f", &ph);
        sueldosemanal=ht*ph;
        printf("el sueldo del empleado %i", i);
        printf(" es de %2.f", ss);
        printf("$ \n");
        tot=tot+ss;
      }

printf("El sueldo semanal de %i trabajadores es:  %.2f $", n-1,tot);
getch();
}
