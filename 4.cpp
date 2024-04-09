#include <iostream>
using namespace std;

//Leer dos numeros, mostrar el primer número elevado a la 4 potencia y el segundo número elevado al cuadrado.

int main(int argc, char const *argv[])
{
    int num1, num2;

    cout << "Dijite un numero: ";
    cin >> num1;
    cout << "Dijite otro numero: ";
    cin >> num2;

    cout << num1 << " elevado a lacuarta potencia es: " << num1 * num1 * num1 *num1 << endl;
    cout << num2 << " elevado a el cuadrado es: " << num2 * num2;
    return 0;
}
