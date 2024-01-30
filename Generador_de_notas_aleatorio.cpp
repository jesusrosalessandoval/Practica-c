/*
TITULO:gENERADOR DE NOTAS ALEATORIO
AUTOR:JUAN JESUS ROSALES SANDOVAL
DESCRIPCION:GENERAR NOTAS ALEATORIAS CON CARATERES ALEATORIOS
FECHA:29/01/2024
*/


#include <iostream>
#include <ctime>  // Incluir la cabecera ctime para sembrar el generador de n�meros aleatorios
using namespace std;
char caracter[] = {'a','b','c','d','e','f','g','h','i','j','k','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int numero[10];
char c[10];
// Generador de n�meros aleatorios
void numAleatorio() {
	srand(time(nullptr));
}
// Funci�n para generar un car�cter aleatorio
char generarCaracter() {
	return caracter[rand() % 26];
}

// Funci�n para generar un n�mero aleatorio
int generarNumero() {
	return rand() % 100;
}
// Funci�n para generar datos aleatorios
void generarDatos() {
	for (int i = 0; i < 10; i++) {
		numero[i] = generarNumero();
		c[i] = generarCaracter();
	}
}
// Funci�n para imprimir la tabla
void imprimirTabla() {
	cout << "CAR\tNUM" << endl;
	for (int i = 0; i < 10; i++)
		cout << c[i] << "\t" << numero[i] << endl;
}
//Imprimir en la pantalla
int main(int argc, char *argv[]) {
	// Generador de n�meros aleatorios
	numAleatorio();
	// Generar datos aleatorios utilizando la funci�n
	generarDatos();
	// Imprimir la tabla
	imprimirTabla();
	
	return 0;
}
