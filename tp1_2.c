#include <stdio.h>

void cuadradoDeUnNumero(float numeroIngresado);
void invertir(float a, float b);
void orden(float a, float b);

int main() {
  float numeroIngresado, primero, segundo;

  printf("Ingrese un numero para elevarlo al cuadrado: ");
  scanf("%f", &numeroIngresado);

  cuadradoDeUnNumero(numeroIngresado);

  printf("Ingrese el primer valor a invertir y ordenar: ");
  scanf("%f", &primero);
  printf("Ingrese el segundo valor a invertir y ordenar: ");
  scanf("%f", &segundo);

  printf("La direccion de memoria de la variable ingresada primero es: %p\n", &primero);
  printf("El contenido de la variable ingresada primero es: %.2f\n", primero);
  printf("La direccion de memoria de la variable ingresada luego es: %p\n", &segundo);
  printf("El contenido de la variable ingresada luego es: %.2f\n", segundo);

  invertir(primero, segundo);
  orden(primero, segundo);


  return 0;
}

void cuadradoDeUnNumero(float numeroIngresado)
{
  printf("La direccion de memoria de la variable ingresada es: %p\n", &numeroIngresado);
  printf("El contenido de la variable ingresada es: %.2f\n", numeroIngresado);
  printf("El cuadrado del numero ingresado es: %.2f\n\n", (numeroIngresado*numeroIngresado));
}

void invertir(float a, float b)
{
  printf("------- INVERTIR -------\n");
  printf("El primer y segundo valor es: %.2f y %.2f\n", a, b);
  float aux = a;
  a = b;
  b = aux;

  printf("Luego de invertir:\n");
  printf("El primer y segundo valor es: %.2f y %.2f\n", a, b);
}

void orden(float a, float b)
{

  printf("------- Ordenar -------\n");
  printf("El primer y segundo valor es: %.2f y %.2f\n", a, b);
  float aux = a;


  if(a > b){
    a = b;
    b = aux;
  }
  if(a == b) {
    printf("Ambos valores son iguales\n");
    return;
  }

  printf("Luego de ordenar:\n ");
  printf("El primer y segundo valor es: %.2f y %.2f\n", a, b);

}