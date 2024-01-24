#include <iostream>
#include <random>
#include <limits>

using namespace std;
int n1,n2;
//declaracion de functiones
int sumarNumeros()
{
	int sumarNumeros;		
	sumarNumeros=n1+n2;	
	return sumarNumeros;
}
void Numeros()
{
	cout<<"Ingrese el primer numero: ";
	cin>>n1;
	cout<<"Ingrese el segundo numero: ";
	cin>>n2;
}
int main(int argc, char *argv[]) {
	int n1,n2;
	Numeros();
	cout<<"Suma de 2 numero: " <<sumarNumeros()<<endl;
	Numeros();
	cout<<"Suma de 2 numero: " <<sumarNumeros()<<endl;
	return 0;
	}
