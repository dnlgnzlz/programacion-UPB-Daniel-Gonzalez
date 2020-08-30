//programacion aplicada upb
//DANIEL GONZALEZ HERRERA
//par oimpar

#include<iostream>
#include<math.h>

using namespace std;

int main() {
	int numero;

	cout << "digite un mumero: "<<endl;
	cin >> numero;
	//%2, divide entre 2 y saca el residuo, si es igual a 0 es par y si no no lo es
	if (numero == 0) {
		cout << "elnumero es cero" << endl;
	}
	else if (numero % 2 == 0) {
		cout << "el numero es par" << endl;
	}
	else {
		cout << "el numero es impar" << endl;
	}



	system("pause");
	return 0;
}
