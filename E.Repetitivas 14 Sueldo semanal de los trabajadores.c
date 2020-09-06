#include<stdio.h>
void main(){

int i,n;
float ht,ph,ss,tot;

printf("Ingrese el numero de trabajadores: ");
scanf("%i", &n);

n=n+1;

for(int i=1; i<n; i++)
      {
        printf("Ingrese las horas trabajadas del %i ", i);
        printf("empleado: ");
        scanf("%f", &ht);
        printf("Ingrese su pago por hora: ");
        scanf("%f", &ph);
        ss=ht*ph;
        printf("el sueldo del empleado %i", i);
        printf(" es de %2.f", ss);
        printf("$ \n");
        tot=tot+ss;
      }

printf("el sueldo semanal de %i ", n-1);
printf("trabajadores");
printf(" es de %2.f", tot);
printf("$");
getch();
}
