/******************************************************************************

ACTIVIDAD 2 SUMA, RESTA, MULTIPLICACIÓN Y DIVISIÓN

*******************************************************************************/

#include<iostream>
using namespace std;
int main() {
    double numero1, numero2;
    int opción;
    
    //Mostrar un menú de opciones
    std::cout << "Seleccione una operación: " << std::endl;
    std::cout << "1. Sumar:" << std::endl;
    std::cout << "2. Restar:" << std::endl;
    std::cout << "3. Multiplicar:" << std::endl;
    std::cout << "4. Dividir:" << std::endl;
    cout << "Ingrese una operación a realizar: ";
    cin >> opción;
    
    // pedir al usuario que ingrese dos numeros
    cout << " Ingrese el primer número: ";
    cin >> numero1;
    cout << " Ingrese el segundo número: ";
    cin >> numero2;
    
    // Realizar operación deseada
    switch(opción) {
        case 1:
        std::cout << "La suma es: " << numero1 + numero2 << std::endl; 
        break;
        case 2:
        std::cout << "La resta es: " << numero1 - numero2 << std::endl;
        break;
        case 3:
        std::cout << "La multiplicación es: " << numero1 * numero2 << std::endl;
        break;
        case 4:
        std::cout << "La división es: " << numero1 / numero2 << std::endl;
        break;
    }
    
    
    return 0;
}