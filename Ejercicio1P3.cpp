/*
TITULO:PRACTICO#3
AUTOR:JUAN JESUS ROSALES SANDOVAL
DESCRICION:HACER UN MENU EN LA QUE PODAMOS HACER LO SIGUIENTE:
SUMA DE CADENAS, INVERTIR EL NOMBRE Y OFUSCAR
FECHA:27/01/2024
*/

#include <iostream>
#include <sstream>
#include <algorithm>
#include <cctype>
using namespace std;
// Funci�n que suma los n�meros en una cadena
int sumaCadena(string cadena) {
	istringstream iss(cadena);
	int numero;
	char operador;
	int resultado = 0;
	while (iss >> numero) {
		resultado += numero;
		if (iss >> operador) {
			if (operador != '+' && operador != '-') {
				cout << "Opcion no v�lido " << endl;
				return 0;
			}
		}
	}
	return resultado;
}
// Funci�n que invierte el orden de los caracteres en un nombre
string invertirNombre(string nombre) {
	reverse(nombre.begin(), nombre.end());
	return nombre;
}
// Funci�n que procesa un nombre completo
string nombreCompleto() {
	string nombreCompleto;
	cout << "Ingresa el nombre completo: ";
	cin.ignore();
	getline(cin, nombreCompleto);
	istringstream ss(nombreCompleto);
	string nombre1, nombre2, apepat, apemat;
	
	// Leer las palabras
	ss >> nombre1 >> nombre2 >> apepat >> apemat;
	
	// Verificar la cantidad de espacios
	int contadorEspacios = count(nombreCompleto.begin(), nombreCompleto.end(), ' ');
	
	// Convertir las primeras letras de cada palabra a may�sculas
	apepat[0] = toupper(apepat[0]);
	apemat[0] = toupper(apemat[0]);
	nombre1[0] = toupper(nombre1[0]);
	nombre2[0] = toupper(nombre2[0]);
	
	// Ajustar la l�gica seg�n la cantidad de espacios
	if (contadorEspacios == 2) {
		// Si hay dos espacios, asumimos que hay dos palabras y devolvemos el resultado
		return nombre2 + " " + apepat + " " + nombre1;
	} else if (contadorEspacios == 3 ) {
		// Si hay m�s de dos espacios, asumimos que hay tres o m�s palabras y devolvemos el resultado
		return apepat + " " + apemat + " " + nombre1 + " " + nombre2;
	} else {
		// Si no hay suficientes espacios, devolvemos la cadena sin cambios
		return nombreCompleto;
	}
}
// Funci�n que ofusca una cadena de texto seg�n reglas espec�ficas
string ofuscarCadena(string cadena) {
	for (char& c : cadena) {
		c = tolower(c); // Convertir a min�sculas
		switch (c) {
		case 'a':
			c = '4';
			break;
		case 'e':
			c = '3';
			break;
		case 'i':
			c = '1';
			break;
		case 'o':
			c = '0';
			break;
		case 's':
			c = '5';
			break;
		case 't':
			c = '7';
			break;
		default:
			break;
		}
	}
	return cadena;
}
// Funci�n que muestra el men� principal del programa
void menuPrincipal() {
	cout << "MENU PRINCIPAL" << endl;
	cout << "(1) - String suma de una cadena." << endl;
	cout << "(2) - String Nombre completo." << endl;
	cout << "(3) - String ofuscar." << endl;
	cout << "(s/S) - Salir" << endl;
}

// Funci�n principal del programa
int main() {
	char opcion;
	
	do {
		menuPrincipal();
		cout << "Seleccione una opci�n: ";
		cin >> opcion;
		opcion = tolower(opcion);
		switch (opcion) {
		case '1': {
			string cadena;
			cout << "Ingrese la cadena para la suma: ";
			cin.ignore();
			getline(cin, cadena);
			int resultado = sumaCadena(cadena);
			cout << "Resultado de la suma: " << resultado << endl;
			break;
		}
		case '2': {
			string resultado = nombreCompleto();
			cout << "Nombre completo invertido: " << resultado << endl;
			break;
		}
		case '3': {
			string cadena;
			cout << "Ingrese la cadena para ofuscar: ";
			cin.ignore();
			getline(cin, cadena);
			string resultado = ofuscarCadena(cadena);
			cout << "Cadena ofuscada: " << resultado << endl;
			break;
		}
		case 's':
			cout << "Saliendo del programa." << endl;
			break;
		default:
			cout << "Opci�n no v�lida. Intente de nuevo." << endl;
		}
	} while (opcion != 's' && opcion != 'S');
	
	return 0;
}
