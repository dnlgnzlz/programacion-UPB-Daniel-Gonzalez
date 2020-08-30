//programacion aplicada upb
//DANIEL GONZALEZ HERRERA
//numeros romanos

#include<iostream>
#include<math.h>

/*M=1000, D=500, C=100,
* L=50, V=5, I=1
*/
using namespace std;

int main() {
	int numero, unidades, decenas, centenas, millares;

	cout << "digite un numero: ";
		cin >> numero;
	//ejemplo con3512
	unidades = numero % 10; numero /= 10; //al dividir entre 10 la coma se corre un valor a la izq, de 3512, sera 2 quedaria 351
	decenas = numero % 10; numero /= 10; // division en 100 da decenas, seria sobre el nomero anterir351, por lo tanto 1
	centenas = numero % 10; numero /= 10; //numero anterirsobre 35, seria 5
	millares = numero % 10; numero /= 10; //3 miles

	switch (millares) {
	case 1: cout << "M"; break;
	case 2: cout << "MM"; break;
	case 3: cout << "MMM"; break;
	}
	switch (centenas) {
	case 1: cout << "C"; break;
	case 2: cout << "CC"; break;
	case 3: cout << "CCC"; break;
	case 4: cout << "CD"; break;
	case 5: cout << "D"; break;
	case 6: cout << "DC"; break;
	case 7: cout << "DCC"; break;
	case 8: cout << "DCCC"; break;
	case 9: cout << "CM"; break;
	}
	switch (decenas) {
	case 1: cout << "X"; break;
	case 2: cout << "XX"; break;
	case 3: cout << "XXX"; break;
	case 4: cout << "XL"; break;
	case 5: cout << "L"; break;
	case 6: cout << "LX"; break;
	case 7: cout << "LXX"; break;
	case 8: cout << "LXXX"; break;
	case 9: cout << "XC"; break;
	}
	switch (unidades) {
	case 1: cout << "I"; break;
	case 2: cout << "II"; break;
	case 3: cout << "III"; break;
	case 4: cout << "IV"; break;
	case 5: cout << "V"; break;
	case 6: cout << "VI"; break;
	case 7: cout << "VII"; break;
	case 8: cout << "VIII"; break;
	case 9: cout << "IX"; break;
	}
	
	
	return 0;
}
