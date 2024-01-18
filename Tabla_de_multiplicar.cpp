/*
TITULO:TABLA DE MULTIPLICAR
AUTOR:JUAN JESUS ROSALES SANDOVAL
DESCRIPCION:IMPRIMA LA TABLA DE MULTIPLICAR DE UN N�MERO DADO POR EL USUARIO.
FECHA:17/01/2024
*/
#include <iostream>
using namespace std;
int main() {
	int numero;
	
	// SOLICITAR AL USUARIO INGRESAR UN N�MERO
	cout << "INGRESE EL NUMERO PARA LA TABLA MULTIPLICAR: ";
	cin >> numero;
	
	// IMPRIMIR LA TABLA DE MULTIPLICAR UTILIZANDO UN BUCLE FOR
	for (int i = 1; i <= 10; ++i) {
		cout << numero << "x" << i << "=" << numero * i <<endl;
	}
	
	return 0;
}
