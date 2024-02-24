#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero entero positivo n: ";
    cin >> n;

    int suma_pares = 0;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            suma_pares += i;
        }
    }

    cout << "La suma de los numeros pares desde 1 hasta " << n << " es: " << suma_pares << endl;

    return 0;
}
