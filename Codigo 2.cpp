/******************************************************************************

ACTIVIDAD 2 SUMA, RESTA, MULTIPLICACIÓN Y DIVISIÓN

*******************************************************************************/

#include<iostream>
using namespace std;
int main() {
    double numero1, numero2;
    
    // Pedir al usuario que ingrese dos numeros
    cout << " Ingrese el primer número: ";
    cin >> numero1;
    cout << " Ingrese el segundo número: ";
    cin >> numero2;
    
    // Realizar operaciónes juntas
        std::cout << "La suma es: " << numero1 + numero2 << std::endl;
        std::cout << "La resta es: " << numero1 - numero2 << std::endl;
        std::cout << "La multiplicación es: " << numero1 * numero2 << std::endl;
        std::cout << "La división es: " << numero1 / numero2 << std::endl;
    
    
    return 0;
}