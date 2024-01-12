/*
TITULO: TIPOS DE LIMITES 
AUTOR:JUAN JESUS ROSALES SANDOVAL
DESCRIPCION: LIMITE DE RANGO DE TIPO SHORT INT Y SHORT
FECHA:11/01/2024
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	short int numero_entero_p;
	unsigned short int numero_entero_p1;
	int numero_entero;
	float numero_decimal;
	double numero_decimal_g;
	//Asignando valores limites de los tipos de datos
	numero_entero_p=32767;//Valor limite de rango
	cout <<"Numero entero pequeño: " <<numero_entero_p<<endl;
	numero_entero_p1=6535; //Valor fuera del rango
	cout <<"Numero entero pequeño positivo: " <<numero_entero_p1<<endl;
	return 0;
}

