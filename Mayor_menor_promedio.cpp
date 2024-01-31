#include <iostream>
#include <cstdlib>

using namespace std;

void generarNumerosAleatorios(int numeros[], int cantidad) {
    for (int i = 0; i < cantidad; ++i) {
        numeros[i] = rand() % 100;
    }
}

void encontrarMayorMenorPromedio(const int numeros[], int cantidad, int &mayor, int &menor, double &promedio) {
    mayor = menor = numeros[0];
    int suma = 0;

    for (int i = 0; i < cantidad; ++i) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }

        if (numeros[i] < menor) {
            menor = numeros[i];
        }

        suma += numeros[i];
    }

    promedio = static_cast<double>(suma) / cantidad;
}

void mostrarResultados(const int numeros[], int cantidad, int mayor, int menor, double promedio) {
    cout << "Números generados: ";
    for (int i = 0; i < cantidad; ++i) {
        cout << numeros[i] << " ";
    }

    cout << "\nMayor: " << mayor << "\nMenor: " << menor << "\nPromedio: " << promedio << endl;
}

int main() {
    const int cantidadNumeros = 10;
    int numeros[cantidadNumeros];
    int mayor, menor;
    double promedio;

    generarNumerosAleatorios(numeros, cantidadNumeros);
    encontrarMayorMenorPromedio(numeros, cantidadNumeros, mayor, menor, promedio);
    mostrarResultados(numeros, cantidadNumeros, mayor, menor, promedio);

    return 0;
}
