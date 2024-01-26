#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string Lyu;
	Lyu = "Yoo amo c++";
	cout<<"La cadena es: "<<Lyu <<endl;
	cout<<"La longitud de la cadena es: "<<Lyu.length()<<endl;
	//si el valor de retorno es 0, significa que la cadena no esta vacia
	cout<<"¿Esta vacio? "<<Lyu.empty()<<endl<<endl;
	Lyu.append("!");
	cout<<"La cadena modificada es: "<<Lyu<<endl;
	string Lyu_2;//Agrega uno despues de la cadena
	Lyu_2="I love you";
	Lyu.swap(Lyu_2);//Intercambio de datos de cadenas
	cout<<"Cambie la cadena modificada como: "<<Lyu<<endl;
	
	int site;
	site=Lyu.find('l', 0);//encuentra la pocicion donde se encuentra l
	cout<<"La posicion donde aparece l en la cadena es: "<<site<<endl;
	site=Lyu.find("oo", 0);//encuentra la pocicion donde se encuentra oo
	cout<<"La posicion donde aparece oo en la cadena es: "<<site<<endl<<endl;
	site=0;
	do
	{
		site=Lyu.find('o', site);
		if (site==-1)
			cout<<"Busqueda completa, no hay otros elementos"<<endl;
		else
			cout<<"La posicion donde aparece o en la cadena es: "<<site<<endl;
		site++;
	} while(site !=0);
	
		
		
	return 0;
}

