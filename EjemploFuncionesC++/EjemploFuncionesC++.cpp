// EjemploFuncionesC++.cpp : Este archivo contiene la funci�n "main". La ejecuci�n del programa comienza y termina ah�.
//

#include <iostream>
#include <string> // Necesario para getline
using namespace std;


// Ejemplo1: funci�n sin argumentos (par�metros) y sin valor de retorno
void funcionVoidSinArgs()
{
	cout << "Ejemplo1 (dentro de la funci�n)" << endl;
	cout << "Este es un ejemplo de funci�n sin argumentos y sin valor de retorno\n";
	cout << "Hola Carmen!\n";
}

// Ejemplo2: funci�n con argumentos (paso de par�metros por valor) y sin valor de retorno
void funcionVoidConArgsPorValor(string saludo)
{
	cout << "Ejemplo2 (dentro de la funci�n)" << endl;
	cout << "Esta funci�n recibe un saludo por par�metro y lo muestra por pantalla\n";
	cout << saludo << "\n";
	saludo = "Hola CQR!";
	cout << saludo << "\n";
}

// Ejemplo3: funci�n sin argumentos y con valor de retorno
string funcionConRetornoYSinArgs()
{
	cout << "Ejemplo3 (dentro de la funci�n)" << endl;
	cout << "Esta funci�n pide un saludo por teclado y lo retorna\n";
	cout << "Escribe el saludo que quieras que aparezca al iniciar sesi�n: \n";
	string saludo;

	getline(cin, saludo); // Lee hasta el salto de l�nea
	return saludo;
}

// Ejemplo4: funci�n con argumentos (paso de par�metros por valor) y con valor de retorno
string funcionConRetornoYArgs(string saludo)
{
	cout << "Ejemplo4 (dentro de la funci�n)" << endl;
	cout << "Esta funci�n recibe un saludo por par�metro, pide un nombre por teclado y retorna el saludo con el nombre\n";
	string nombre;
	cout << "Introduce tu nombre: \n";
	cin >> nombre;

	return (saludo + " " + nombre);
}

// Ejemplo5: funci�n con argumentos (paso de par�metros por referencia) y sin valor de retorno
void funcionVoidConArgsPorReferencia(string& saludo, string& nombre)
{
	cout << "Ejemplo5 (dentro de la funci�n)" << endl;
	cout << "Esta funci�n pide un saludo y un nombre por teclado y los guarda en las variables pasadas por referencia\n";
	cout << "Escribe el saludo que quieras que aparezca al iniciar sesi�n: \n";
	cin >> saludo;
	cout << "Introduce tu nombre: \n";
	cin >> nombre;
}

// Ejemplo6: funci�n con argumentos (paso de par�metros por referencia) y con valor de retorno
string funcionConRetornoYConArgsPorReferencia(string& nombre, string& apellidos)
{
	cout << "Ejemplo6 (dentro de la funci�n)" << endl;
	cout << "Esta funci�n recibe un nombre y apellidos por referencia, los modifica y los retorna concatenados\n";

	cout << "El nombre recibido es: " << nombre << "\n";
	cout << "�Quieres cambiarlo? (S/N)\n";
	char respuesta;
	cin >> respuesta;
	if (respuesta == 'S' || respuesta == 's')
	{
		cout << "Escribe tu nombre: \n";
		cin >> nombre;
	}

	cout << "Los apellidos recibidos son: " << apellidos << "\n";
	cout << "�Quieres cambiarlos? (S/N)\n";
	cin >> respuesta;
	if (respuesta == 'S' || respuesta == 's')
	{
		cout << "Escribe tus apellidos: \n";
		cin >> apellidos;
	}
	return (nombre + " " + apellidos);
}

int main()
{
	setlocale(LC_ALL, "es_ES.UTF-8");	// Para que se muestren los acentos correctamente en consola

	//// Ejemplo1: Llamada a funci�n sin argumentos y sin valor de retorno
	//cout << "Ejemplo1 (antes de la llamada a la funci�n)" << endl;
	//funcionVoidSinArgs();
	//cout << "Ejemplo1 (despu�s de la llamada a la funci�n)" << endl;
	//cout << "\n";

	// Ejemplo2: Llamada a funci�n con argumentos (paso de par�metros por valor) y sin valor de retorno
	//cout << "Ejemplo2 (antes de la llamada a la funci�n)" << endl;
	//string saludo = "Hola Carmen!";
	//funcionVoidConArgsPorValor(saludo);
	//cout << "Ejemplo2 (despu�s de la llamada a la funci�n)" << endl;
	//cout << saludo << "\n";
	//cout << "\n";

	// Ejemplo3: Llamada a funci�n sin argumentos y con valor de retorno
	//cout << "Ejemplo3 (antes de la llamada a la funci�n)" << endl;
	//string saludo = funcionConRetornoYSinArgs();
	//cout << "Ejemplo3 (despu�s de la llamada a la funci�n)" << endl;
	//cout << saludo << "\n";
	//cout << "\n";
	//
	////// Ejemplo4: Llamada a funci�n con argumentos (paso de par�metros por valor) y con valor de retorno
	//cout << "Ejemplo4 (antes de la llamada a la funci�n)" << endl;
	//string saludo2 = funcionConRetornoYArgs("Hola");
	//cout << "Ejemplo4 (despu�s de la llamada a la funci�n)" << endl;
	//cout << saludo2 << "\n";
	//cout << "\n";
	//
	// Ejemplo5: Llamada a funci�n con argumentos (paso de par�metros por referencia) y sin valor de retorno
	string saludo3, nombre;
	cout << "Ejemplo5 (antes de la llamada a la funci�n)" << endl;
	funcionVoidConArgsPorReferencia(saludo3, nombre);
	cout << "Ejemplo5 (despu�s de la llamada a la funci�n)" << endl;
	cout << saludo3 << " " << nombre << "\n";
	cout << "\n";
	//
	//// Ejemplo6: Llamada a funci�n con argumentos (paso de par�metros por referencia) y con valor de retorno
	//string nombre2 = "Carmen", apellidos = "Quint�s";
	//cout << "Ejemplo6 (antes de la llamada a la funci�n)" << endl;
	//string nombreCompleto = funcionConRetornoYConArgsPorReferencia(nombre2, apellidos);
	//cout << "Ejemplo6 (despu�s de la llamada a la funci�n)" << endl;
	//cout << nombreCompleto << "\n";
	//cout << "\n";
	return 0; // Devuelve 0 si todo ha ido bien. No es necesario en C++ pero es una buena pr�ctica

}