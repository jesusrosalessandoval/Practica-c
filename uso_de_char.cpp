/*
TITULO:ASIGNACION DE CHAR
AUTOR:Juan Jesus Rosales Sandoval
DESCRIPCION: Declaracion de uso de CHAR
FECHA:12/01/2024
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//Definicion y asignacion de valores char
	char letra;
	letra='L';
	cout<<"Imprimiendo la letra 'L': " <<letra<<endl;
	//letra="ll";//ERROR por asignar nas de un caracter.
	//Asignando valores numericos
	letra=65;//ASCII es la letra A.
	cout<<"Imprimiendo ASCII '65': "<<letra<<endl;
	//IMPRIMIR EN CODIGO ASCII LAS VOCALES MAY Y MIN, @,\,Á,É,Í,Ó,Ú
	letra=181;//ASCII es la letra Á.
	cout<<"Imprimiendo ASCII '181': "<<letra<<endl;
	letra=144;//ASCII es la letra É.
	cout<<"Imprimiendo ASCII '144': "<<letra<<endl;
	letra=214;//ASCII es la letra Í.
	cout<<"Imprimiendo ASCII '214': "<<letra<<endl;
	letra=224;//ASCII es la letra Ó.
	cout<<"Imprimiendo ASCII '224': "<<letra<<endl;
	letra=233;//ASCII es la letra Ú.
	cout<<"Imprimiendo ASCII '233': "<<letra<<endl;
	letra=64;//ASCII es la letra @.
	cout<<"Imprimiendo ASCII '64': "<<letra<<endl;
	letra=92;//ASCII es la letra \.
	cout<<"Imprimiendo ASCII '92': "<<letra<<endl;
	letra=160;//ASCII es la letra á.
	cout<<"Imprimiendo ASCII '160': "<<letra<<endl;
	letra=130;//ASCII es la letra é.
	cout<<"Imprimiendo ASCII '130': "<<letra<<endl;
	letra=161;//ASCII es la letra í.
	cout<<"Imprimiendo ASCII '161': "<<letra<<endl;
	letra=162;//ASCII es la letra ó.
	cout<<"Imprimiendo ASCII '162': "<<letra<<endl;
	letra=163;//ASCII es la letra ú.
	cout<<"Imprimiendo ASCII '163': "<<letra<<endl;
	
	char nombre[]="JUAN";
	cout <<"Imprimiendo el nombre '\'"<<nombre<<endl;
	cout <<"Imprimiendo el nombre[0] '\': "<<nombre[0]<<endl;
	cout <<"Imprimiendo el nombre[1] '\': "<<nombre[1]<<endl;
	cout <<"Imprimiendo el nombre[2] '\': "<<nombre[2]<<endl;
	cout <<"Imprimiendo el nombre[3] '\': "<<nombre[3]<<endl;
	
	
	
	
	
	
	
	return 0;
}

