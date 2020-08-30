//programacion aplicada upb
//DANIEL GONZALEZ HERRERA

#include<iostream>
#include<math.h>

using namespace std;

int main() {
	float X,Y, resultado = 0;

	cout << "digitel el valor de X:"; cin >> X;
	cout << "digitel el valor de Y:"; cin >> Y;
	resultado = (sqrt(X)) / (pow(Y, 2) - 1);//sqrt raiz cuadrada
	//pow(variable, exponente)
	cout.precision(3);
	cout <<"\n El resultado es:" <<resultado<<endl;

	system("pause");
	return 0;
}
