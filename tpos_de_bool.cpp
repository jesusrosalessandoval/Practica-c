/*
TITULO:Tipos de Boolianos
AUTOR:Juan Jesus Rosales Sandoval
DESCRIPCION: Declaracion de uso de bool
FECHA:12/01/2024
*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	//Declaracion y uso de bool
	bool b1;
	b1=true;
	cout<<"Valor con valor TRUE: "<<b1<<endl;
	b1=false;
	cout<<"Valor con valor FALSO: "<<b1<<endl;
	//Asignacion de valores numerico
	//Si es 0 es Falso, Si diferente de 0 en verdadero
	b1=0;//El valor se veras como false
	cout<<"Valor con valor 0: "<<b1<<endl;
	b1=1;//El valor se veras como true
	cout<<"Valor con valor 1: "<<b1<<endl;
	b1=-100;//El valor se vera como true
	cout<<"Valor con valor -100: "<<b1<<endl;
	return 0;
}

