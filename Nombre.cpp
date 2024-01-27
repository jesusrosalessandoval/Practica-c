/*
Autor:juan jesus rosales sandoval
*/

#include <iostream>
#include <string>

using namespace std;
string NombreCompleto(const string& nombre1, const string& nombre2, const string& apepat, const string& apemat)
{
	return apepat + " " + apemat + " " + nombre1 + " " + nombre2;
}
int main()
{
	string nombre1, nombre2, apepat, apemat;
	cout << "Ingresa el nombre completo: ";
	cin >> nombre1 >> nombre2 >> apepat >> apemat;
	string nombreCompleto = NombreCompleto(nombre1, nombre2, apepat, apemat);
	cout << "Nombre completo: " << nombreCompleto << endl;
	return 0;
} 
