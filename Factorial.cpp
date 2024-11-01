#include <iostream>
using namespace std;

int operacion(int factorial) {
    int n=1;

    for (int i = factorial; i >= 1; i--) {
        n *= i;
    }
    return n;
}

int RetirarEfectivo(int saldo) {
    int retiro;
    cout << "Cuanto desea retirar? (numeros enteros)" << endl;
    cin >> retiro;

    if (retiro < 0) {
        cout << "No se puede retirar numeros negativos" << endl;
    }
    else {
        cout << "Usted retiro " << retiro << " pesos" << endl;
    }
    return retiro;
}


int main() {
    int D, factorial, C, saldo = 20000;
    cout << "Que desea hacer?" << endl;
    cout << "Obtener el factorial de un numero = 1" << endl;
    cout << "Usar el cajero = 2" << endl;
    cin >> D;

    if (D == 1) {
        cout << "Elige un numero para teren su factorial" << endl;
        cin >> factorial;

        if (factorial < 0) {
            cout << "No se puede tener un factorial de un numero negativo" << endl;
        }
        else if (factorial <= 1) {
            cout << "El factorial de " << factorial << " es: " << 1 << endl;
        }
        else {
            int n = operacion(factorial);
            cout << "El factorial de " << factorial << " es: " << n << endl;
        }
    }
    else if (D == 2) {
        cout << "Que desea hacer en el cajero?" << endl;
        cout << "Consultar saldo = 1" << endl;
        cout << "Retirar efectivo = 2" << endl;
        cin >> C;

        if (C == 1) {
            cout << "Su saldo es " << saldo << endl;
        }
        else if (C == 2) {
            int retiro = RetirarEfectivo(saldo);
            cout << "su nuevo saldo es " << saldo-retiro << endl;
        }
        else {
            cout << "Esa no es una de las opciones" << endl;
        }
    }
    else {
        cout << "Esa no es una de las opciones" << endl;
    }
    return 0;
}
