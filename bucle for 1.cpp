#include <iostream>
using namespace std;

int main() {
    int term1 = 0, term2 = 1;
    cout << "Los primeros 10 términos de la serie de Fibonacci son:" << endl;

    for (int i = 0; i < 10; ++i) {
        cout << term1 << " ";
        int nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
    }

    return 0;
}
