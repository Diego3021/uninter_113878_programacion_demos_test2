
/*
*Programa: Test2
* Nombre: Diego Nicolas Nava Villegas
* Descripcion: Este programa imprime "Hello World!" en la consola.
* Fecha: 2024-06-10
* Fecha de modificacion: 2024-06-10
*/

#include <iostream>

int main()
{
	int a = 0;
	int b = 0;
	int suma = 0;

	printf("Digite un numero: ");
	scanf_s("%d", &a);

	printf("Digite otro numero: ");
	scanf_s("%d", &b);

	suma = a + b;

	std::cout << "La suma de " << a << " y " << b << " es: " << suma << std::endl;


    
}


