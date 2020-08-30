#include<iostream>

using namespace std;

int main() {
	float a, b, c, d, e, f, resultado = 0;

	cout << "digitel el valor de a:"; cin >> a;
	cout << "digitel el valor de b:"; cin >> b;
	cout << "digitel el valor de c:"; cin >> c;
	cout << "digitel el valor de d:"; cin >> d;
	cout << "digitel el valor de e:"; cin >> e;
	cout << "digitel el valor de f:"; cin >> f;

	resultado = (a + b / c) / (d + e/f);
	cout.precision(3);
	cout << "n\El resultado es:" << resultado<<endl;


	system("pause");
	return 0;
}