#include <iostream>
using namespace std;

void menuPrincipal() {

	cout<<"Menu Principal\n";
	cout<<"(1)-String suma de una cadena\n";
	cout<<"(2)-String Nombre Completo\n";
	cout<<"(3)-String ofuscar\n";
	cout<<"(s/S)-Salir"
}

int main(int argc, char *argv[]) {
	
	char opcion;	
	do
		cout<<"Elija una opcion";
		cin>>opcion;
		switch (opcion) {
		case '1':
		{
			
		}	
			break;
		case '2':
		{
			

		}
		break;
		case 's':
			cout << "Saliendo del programa." << endl;
			break;
		default:
			cout << "Opción no válida. Inténtalo de nuevo." << endl;
			break;
		}
		
	} while (opcion != 's' && opcion != 'S');

	return 0;
}

