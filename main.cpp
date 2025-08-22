#include <iostream>
#include "matematicas.h"

int main() {
    int opcion;
    do {
        std::cout << "\n--- Calculadora Simple ---\n";
        std::cout << "1. Sumar\n";
        std::cout << "2. Restar\n";
        std::cout << "3. Factorial\n";
        std::cout << "4. Potencia\n";
        std::cout << "5. Máximo de un arreglo + edad\n";
        std::cout << "6. Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1: {
                int a, b;
                std::cout << "Ingrese dos números: ";
                std::cin >> a >> b;
                std::cout << "Resultado: " << sumar(a, b) << std::endl;
                break;
            }
            case 2: {
                int a, b;
                std::cout << "Ingrese dos números: ";
                std::cin >> a >> b;
                std::cout << "Resultado: " << restar(a, b) << std::endl;
                break;
            }
            case 3: {
                int n;
                std::cout << "Ingrese un número: ";
                std::cin >> n;
                std::cout << "Factorial: " << factorial(n) << std::endl;
                break;
            }
            case 4: {
                int base, exp;
                std::cout << "Ingrese la base y el exponente: ";
                std::cin >> base >> exp;
                std::cout << "Potencia: " << potencia(base, exp) << std::endl;
                break;
            }
            case 5: {
                int arreglo[5] = {4, 10, 3, 25, 7};
                int maximo = encontrarMaximo(arreglo, 5);
                int edad;
                std::cout << "Su edad: ";
                std::cin >> edad;
                std::cout << "Máximo del arreglo + edad = " << (maximo + edad) << std::endl;
                break;
            }
            case 6:
                std::cout << "Saliendo del programa...\n";
                break;
            default:
                std::cout << "Opción no válida.\n";
        }
    } while (opcion != 6);

    return 0;
}
