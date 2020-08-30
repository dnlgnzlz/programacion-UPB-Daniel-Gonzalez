//programacion aplicada upb
//DANIEL GONZALEZ HERRERA
//estructuras condicionales

#include<iostream>
#include<math.h>

using namespace std;

int main() {
	float numero, dato = 23.2;
		cout << "digite el numero:";
	cin >> numero;
	//condicional if siple, boble if else, = operador de asignacion,==operador de igualda, compara el dato con el nuevo
	//!= operador de diferencia, el numero es diferente de dato, va en if, en cso contrari, else, el numero no es diferente, caso contrario al anterior


	if (numero == dato) {
		cout << "el numero es 23.2";
	}
	//caso contrario, si no es el anterior entonces trabaja aca
	else {
		cout << "el numero es diferente de 23.2"<<endl;
	}
	//>mayor, >=mayor o igual, <, <=menorgiual
	if (numero > dato) {
		cout << "\nel numero es mayor a 23.2"<<endl;
	}
	
	else {
		cout << "\nel numero es menor o igual a 23.2" << endl;
	}

	system("pause");
	return 0;
}
