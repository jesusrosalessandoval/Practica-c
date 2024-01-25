#include <iostream>
using namespace std;
//Declaracion de variables glovales
int n1,n2;
//realizar una funcion para recibir un parametro y determinar si es par true o impar false.

int sumar()
{
	return n1+n2;//retorna la suma
}
int multiplicar()
{
	return n1*n2;//retorna la multiplicacion
}
bool par_impar()//funcion para ver si es par true o impar false
{
	cout<<"iNGRESE UN NUMERO: "<<endl;
	cin>>n1;
	if (n1 % 2 == 0)
	{
		cout<<"Es par: ";
		return 1;//Si es par
	}
	else
	{
		cout <<"Es impar: ";
		return 0;//Si es impar
	}
}

//funcion que almacena las variables
void ingresar()
{
	cout <<"Ingresar el primer numero: ";
	cin>>n1;
	cout <<"Ingresar el segundo numero: ";
	cin>>n2;
}
int main(int argc, char *argv[]) {
	ingresar();
	cout<<"La suma de los numeros es: "<<sumar()<<endl;
	cout<<"Multiplicacion de los numeros es: "<<multiplicar()<<endl;
	cout<<par_impar();
	return 0;
}

