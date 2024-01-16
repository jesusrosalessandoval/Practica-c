/*

Titulo:Asignacion del DO WHILE
Autor:JUAN JESUS ROSALES SANDOVAL
Descripcion:Menu con do while
Fecha:15/01/2024
*/
#include <iostream>
using namespace std;
/* datos de inico del programa
Menu
1.- Opcion uno
2.- Opcion dos
0.- Salir
*/

int main(int argc, char *argv[]) {
	
	int opcion;//nombre de nuestra variable
	do//Para imprimir el menu de las opciones
	{
			cout <<"MENU PRINCIPAL"<<endl;
			cout <<"Opcion 1"<<endl;
			cout <<"Opcion 2"<<endl;
			cout <<"Salir"<<endl;
			cin>>opcion;//Ingrasamos una opcion

			switch(opcion){//Imprime la opcion que elegimos
			case 1: cout<<"Eligio la opcion 1"<<endl;
			break;
			case 2: cout<<"Eligio la opcion 2"<<endl;
			break;
			case 0: cout<<"Eligio salir"<<endl;
			break;
			default: cout<<"No escogio una opcion"<<endl;
			};
	} while (opcion !=0);//Revisa nuestra condicion
	return 0;
}

