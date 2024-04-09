#include <stdio.h>

int main (void)
{
  float precio,des,n_precio;

  printf("Ingrese el precio del producto ");
  scanf("%f" ,&precio);

  des=0.15*precio;
  n_precio=precio-des;

  printf("Precio original del producto es:%.2f\n",precio ) ;
  printf("El descuento otorgado es de:%.2f\n" , des);
  printf("El nuevo precio con descuento es:%2.f\n",n_precio);
   
    return 0;
}