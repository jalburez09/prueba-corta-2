#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un numero entero: ";
    cin >> num;

    cout << "Los divisores de " << num << " son: ";
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }

    return 0;
    }