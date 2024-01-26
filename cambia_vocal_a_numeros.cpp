#include <iostream>
using namespace std;
string palabra;

void cambiarVocal(char vocal, char numero)
{	int site=0;
	do
	{
		site=palabra.find(vocal, site);
		if (site != -1)
			palabra[site]=numero;
		site++;
	} while(site !=0);
	
	
}
int main(int argc, char *argv[]) {
	palabra="piensa pe chato, estudia sonso ";
	cambiarVocal('a','4');
	cambiarVocal('o','0');
	cambiarVocal('i','1');
	cambiarVocal('e','3');
	cambiarVocal('u','5');
	cout<<"palabra: "<<palabra<<endl;
	return 0;
}

