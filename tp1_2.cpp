#include <stdio.h>
int cuadrado (int num);
void cuadra2 (int *num);
void invertir (int &a,int &b);
void ordenar(int &c,int &d);

int main(){
	int i,a,b,c,d,num=0,cant,n1,n2,cont;
	int *punt=&i;

	printf("Ingrese un valor: ");
	scanf("%d",&i);
	num = cuadrado(i);
	printf("La direccion de memoria de la variable i es: %p y su contenido es: %d \n",&num,num);
	cuadra2(punt);
	//Tambien se podria lograr hacerlo pasando a la variable i por referencia.
	printf("La direccion de memoria de la variable punt es: %p y su contenido es: %d \n",&punt,*punt);


	printf("\nIngresar dos valores:\n 1(a):");
	scanf("%d",&a);
	printf(" 2(b):");
	scanf("%d",&b);
	invertir(a,b);
	printf("\nLos valores invertidos son:\n Numero 1(a)=%d\n Numero 2(b)=%d\n",a,b);


	printf("\nIngresar dos valores:\n 1(c):");
	scanf("%d",&c);
	printf(" 2(d):");
	scanf("%d",&d);
	if(c==d)
		printf("Los numeros son iguales y su valor es: %d\n",c);
	else{
		ordenar(c,d);
		printf("\nLos valores ordenados son:\n Numero 1(c)=%d\n Numero 2(d)=%d\n",c,d);
	}

	printf("\nCantidad de pares de numeros a ingresar: ");
	scanf("%d",&cant);
	for (cont=0;cont<cant;cont++){
		printf("\nIngresar par de numeros:\n 1: ");
		scanf("%d",&n1);
		printf(" 2: ");
		scanf("%d",&n2);
		if(n1==n2)
			printf("Los numeros son iguales y su valor es: %d\n",n1);
		else{
			ordenar(n1,n2);
			printf("\nLos valores ordenados son:\n Numero 1(c)=%d\n Numero 2(d)=%d\n",n1,n2);
		}
	}

	return 0;
}

int cuadrado (int num){
	num = num * num;
	return num;
}

void cuadra2 (int *num){
	*num = *num * *num;
	return;
}

void invertir (int &a,int &b){
	int aux;
	aux = a;
	a = b;
	b = aux;
	return;
}

void ordenar(int &c,int &d){
	int aux;
	if(d<c){
		aux = c;
		c = d;
		d = aux;
	}
	return;
}

