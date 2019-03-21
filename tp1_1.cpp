#include <stdio.h>

int main(){
	int i=5;
	int *punt = &i;
	//1)
	printf("Contenido del puntero: %d",*punt);
	//2)
	printf("\nDireccion de memoria almacenada por el puntero: %p",punt);
	//3)
	printf("\nDireccion de memoria de la variable: %p",&i);
	//4)
	printf("\nDireccion de memoria del puntero: %p",&punt);
	//5)
	printf("\nTamanio de memoria utilizado por la variable: %d",sizeof(i));
	
	/*
	 En el punto 2 y 3 el resultado es el mismo por que el puntero (punt) desde un comienzo ya apunta
	 a la direccion de memoria de la variable (i).
	 En el punto 4 se consigue un numero diferen ya que estoy mostrando la direccion de memoria del puntero (punt) en si.*
	*/
	
	return 0;
}
