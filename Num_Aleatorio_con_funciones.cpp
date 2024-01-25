#include <iostream>
#include <cstdlib>
using namespace std;
int Aleatorio() {
	return rand() % 100;  
}
bool esImpar(int numero){//generador de numeros aleatorios
	return numero %2!=0;
}
int main(){
	int n,c=0,num;
	cout<<"Generar n numero Impares, ingrese n: ";//imprimir las veses que el usuario ponga
	cin>>n;
	while(c<n)
	{
		num=Aleatorio();
		if(esImpar(num))
		{
			c++;
			cout<<"impar "<<c<<" :"<<num<<endl;//mostrara las veses que el usuario solicite
		}
	}
}
