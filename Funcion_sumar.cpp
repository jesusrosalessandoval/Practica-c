#include <iostream>
#include <random>
#include <limits>

using namespace std;
int n1,n2;
//declaracion de functiones
int sumarNumeros()
{
	int sumarNumeros;		
	sumarNumeros=n1+n2;	//Suma nuestra variable
	return sumarNumeros;
}
void Numeros()//Tipo de valor vacio
{
	cout<<"Ingrese el primer numero: ";
	cin>>n1;//Ingreso de variavles
	cout<<"Ingrese el segundo numero: ";
	cin>>n2;//Ingreso de variavles
}
int main(int argc, char *argv[]) {
	int n1,n2;
	Numeros();
	cout<<"Suma de 2 numero: " <<sumarNumeros()<<endl;//Nuestra la suma total de las variables
	Numeros();
	cout<<"Suma de 2 numero: " <<sumarNumeros()<<endl;//Nuestra la suma total de las variables
	return 0;
	}
