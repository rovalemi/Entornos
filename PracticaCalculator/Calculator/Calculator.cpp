#include <iostream>
using namespace std;

int a, b, suma, resta, multiplicacion;
double division;

void pedirDatos() {
	cout << "Ingrese el primer numero: ";
	cin >> a;
	cout << "Ingrese el segundo numero: ";
	cin >> b;
}

void sumar() {
	suma = a + b;
}

void restar() {
	resta = a - b;
}

void multiplicar() {
	multiplicacion = a * b;
}

void dividir() {
	division = (double) a / b;
}

void mostrarResultados() {
	cout << "La suma es: " << suma << endl;
	cout << "La resta es: " << resta << endl;
	cout << "La multiplicacion es: " << multiplicacion << endl;
	cout << "La division es: " << division << endl;
}

int main() {
	pedirDatos();
	sumar();
	restar();
	multiplicar();
	dividir();
	mostrarResultados();
	system("pause");
	return 0;
}