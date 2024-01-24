#include <iostream>
#include <random>
#include <limits>
	
	using namespace std;

int generarNumeroAleatorio(){
	static random_device rd;
	static mt19937 gen(rd());  //generador de numeros
	uniform_int_distribution<> distrib(0, 99);//El limite de nuestro numero generado
	
	return distrib(gen);
}
int main(){
	int n, numeroAleatorio;
	cout <<"Ingrese la cantidad de numeros aleatorios a generar: ";
	cin>>n;
	for (int i = 0; i < n; i++) {//bucle para que genere todos los numeros puesto en nuestra variable
		numeroAleatorio = generarNumeroAleatorio();
		cout <<numeroAleatorio<<" ";
	}
	return 0;
}
