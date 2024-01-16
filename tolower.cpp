/*

Titulo:Asignacion del tolower
Autor:JUAN JESUS ROSALES SANDOVAL
Descripcion:Convertir el carácter a minúscula
Fecha:15/01/2024
*/
#include <iostream>
#include <cctype> // Agrega la biblioteca para tolower
using namespace std;

int main(int argc, char *argv[]) {
	char caracter;
	cout << "Ingrese una letra: ";
	cin >> caracter;
	
	// Convertir el carácter a minúsculas
	caracter = tolower(caracter);//asegura que el programa asecte mayusculas y minusculas
	
	switch (caracter) {
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		cout << "Es vocal";
		break;
	default:
		cout << "NO es una vocal";
	}
	
	return 0;
}
