/*
TITULO: TIPOS DE LIMITES 
AUTOR:JUAN JESUS ROSALES SANDOVAL
DESCRIPCION: LIMITE DE RANGO DE TIPO INT Y USINGNET INT
FECHA:11/01/2024
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero_entero;
	unsigned int numero_entero_s;
	float numero_decimal;
	double numero_decimal_g;
	//Asignando valores limites de los tipos de datos
	numero_entero=2147483647;//Valor limite de rango
	cout <<"Numero entero pequeño: " <<numero_entero<<endl;
	numero_entero_s=4294967295; //Valor fuera del rango
	cout <<"Numero entero pequeño positivo: " <<numero_entero_s<<endl;
	return 0;
}
