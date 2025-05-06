#include <iostream>

using namespace std;

int a, b, c, disc, sol;

double x1, x2;

void pedirDatos() {
	cout << "CALCULADORA DE ECUACIONES DE SEGUNDO GRADO\n";

	while (a == 0) {
		cout << "Ingrese el coeficiente a (a != 0): ";
		cin >> a;
	}
	cout << "Ingrese el coeficiente b: ";
	cin >> b;
	cout << "Ingrese el coeficiente c: ";
	cin >> c;
}

void operacion() {
	disc = (b * b) - (4 * a * c);

	if (disc < 0) {
		sol = 0;
	}
	else if (disc == 0) {
		sol = 1;
		x1 = (-b) / 2 * a;
	}
	else {
		sol = 2;
		x1 = (-b + sqrt(disc)) / 2 * a;
		x2 = (-b - sqrt(disc)) / 2 * a;
	}
}

void mostrarResultados() {
	switch (sol) {
		case 0:
			cout << "Cuando el discriminante es negativo, la ecuacion no tiene soluciones reales, sino complejas." << endl;
			break;
		case 1:
			cout << "La ecuacion solo tiene una solucion.\n";
			cout << "El valor de x es " << x1 << endl;
			break;
		case 2:
			cout << "La ecuacion tiene dos soluciones.\n";
			cout << "El valor de x1 es " << x1 << endl;
			cout << "El valor de x2 es " << x2 << endl;
			break;
		default:
			cout << "Error";
	}
}

int main() {
	pedirDatos();
	operacion();
	mostrarResultados();
	system("pause");
	return 0;
}