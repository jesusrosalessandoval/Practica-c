/*
TITULO:PAR o IMPAR
AUTOR:Juan Jesus Rosales Sandoval
DESCRIPCION: Solicitar un numero  y verificar si es par o impar
FECHA:12/01/2024
*/
#include "iostream"

using namespace std;

int main()
{
	int numero;
	cout << "ingrese el numero ";
	cin >> numero;
	if(numero % 2)
	{
		cout << "El nuemro es Impar\n";
	}
	else 
	{
	   cout<<"El numero es Par! \n";
	}
	return 0;
}
