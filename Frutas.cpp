#include <iostream>
#include <string>
#include <ctime>
using namespace std;

string frutas[] = {"Manzana", "Banana", "Naranja", "Sand�a", "Cereza", "Mango", "Pera", "Guayaba", "Maracuy�", "Papaya"};
string preparados[] = {"Jugo", "Ensalada", "Frap�", "Tarta", "Helado", "Mermelada", "Batido", "Asado", "C�ctel", "Crudo"};
string fruta[5];
string preparado[5];

// Funci�n para inicializar el generador de n�meros aleatorios
void generarFrutasAleatorias() {
	srand(time(nullptr));
}
// Funci�n para generar una fruta aleatoria
string generarFruta() {
	return frutas[rand() % 10];
}
// Funci�n para generar una preparaci�n aleatoria
string generarPreparado() {
	return preparados[rand() % 10];
}
// Funci�n para generar un conjunto de frutas y preparaciones aleatorias
void generar() {
	for (int i = 0; i < 5; i++) {
		fruta[i] = generarFruta();
		preparado[i] = generarPreparado();
	}
}
// Funci�n para imprimir el men� con los productos generados
void imprimirMenu() {
	cout << "Men� de productos" << endl;
	for (int i = 0; i < 5; i++)
		cout << preparado[i] << " de " << fruta[i] << endl;
}
int main(int argc, char *argv[]) {
	// Inicializar el generador de n�meros aleatorios
	generarFrutasAleatorias();
	// Generar productos aleatorios e imprimir el men�
	generar();
	imprimirMenu();
	return 0;
}
