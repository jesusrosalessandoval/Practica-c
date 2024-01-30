#include <iostream>
#include <string>
#include <ctime>
using namespace std;

string frutas[] = {"Manzana", "Banana", "Naranja", "Sandía", "Cereza", "Mango", "Pera", "Guayaba", "Maracuyá", "Papaya"};
string preparados[] = {"Jugo", "Ensalada", "Frapé", "Tarta", "Helado", "Mermelada", "Batido", "Asado", "Cóctel", "Crudo"};
string fruta[5];
string preparado[5];

// Función para inicializar el generador de números aleatorios
void generarFrutasAleatorias() {
	srand(time(nullptr));
}
// Función para generar una fruta aleatoria
string generarFruta() {
	return frutas[rand() % 10];
}
// Función para generar una preparación aleatoria
string generarPreparado() {
	return preparados[rand() % 10];
}
// Función para generar un conjunto de frutas y preparaciones aleatorias
void generar() {
	for (int i = 0; i < 5; i++) {
		fruta[i] = generarFruta();
		preparado[i] = generarPreparado();
	}
}
// Función para imprimir el menú con los productos generados
void imprimirMenu() {
	cout << "Menú de productos" << endl;
	for (int i = 0; i < 5; i++)
		cout << preparado[i] << " de " << fruta[i] << endl;
}
int main(int argc, char *argv[]) {
	// Inicializar el generador de números aleatorios
	generarFrutasAleatorias();
	// Generar productos aleatorios e imprimir el menú
	generar();
	imprimirMenu();
	return 0;
}
