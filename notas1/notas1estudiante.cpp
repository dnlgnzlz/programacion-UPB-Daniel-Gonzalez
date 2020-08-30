#include<iostream>

using namespace std;

int main() {
	float practica, teorica, participacion, nota_final = 0;

	cout << "nota practica:"; cin >> practica;
	cout << "nota teorica:"; cin >> teorica;
	cout << "nota participacion:"; cin >> participacion;

	practica *= 0.30; //practica=practica*0.30 para reducir las expresiones 
	teorica *= 0.60;
	participacion *= 0.10;

	nota_final = practica + teorica + participacion;
	cout << "\nla nota final es:" <<nota_final<<endl;
	system("pause");
	return 0;
}
