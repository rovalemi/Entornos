#include <iostream>
#include <cmath>
using namespace std;

int main() {

    cout << "CALCULADORA DE ECUACIONES DE SEGUNDO GRADO\n";
    double a, b, c;
    cout << "Introduce el coeficiente a (a != 0): ";
    cin >> a;
    cout << "Introduce el coeficiente b: ";
    cin >> b;
    cout << "Introduce el coeficiente c: ";
    cin >> c;

    double x1, x2;
    double disc;

    // Separo el discriminante para poder saber si es negativo o positivo
    disc = (b * b) - (4 * a * c);

    // En caso sea negativa nos muestre el mensaje de error
    if (disc < 0) {
        cout << "El discriminante es negativo por lo cual da respuestas complejas\n";
        cout << "Intenta con otros coeficientes\n";
    }
    // En caso sea positivo recien ejecute el calculo
    else {
        x1 = (-b + sqrt(disc)) / 2 * a;
        x2 = (-b - sqrt(disc)) / 2 * a;

        cout << "El valor de x1 es " << x1 << " y el valor de x2 es " << x2 << "\n";
    }
}