#include "matematicas.h"

// Suma y resta
int sumar(int num1, int num2) {
    return num1 + num2;
}

int restar(int num1, int num2) {
    return num1 - num2;
}

// Factorial
int factorial(int num) {
    int resultado = 1;
    for (int i = 1; i <= num; i++) {
        resultado *= i;
    }
    return resultado;
}

// Potencia
int potencia(int base, int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}

// Encontrar el máximo
int encontrarMaximo(int arreglo[], int tamano) {
    int max = arreglo[0];
    for (int i = 1; i < tamano; i++) {
        if (arreglo[i] > max) {
            max = arreglo[i];
        }
    }
    return max;
}

// --- Ejemplos con arreglos ---
int llenarArreglo(int arreglo[], int tamano) {
    for (int i = 0; i < tamano; i++) {
        arreglo[i] = i + 1;
    }
    return 0;
}

int sumarPares(int arreglo[], int tamano) {
    int suma = 0;
    for (int i = 0; i < tamano; i += 2) {
        suma += arreglo[i];
    }
    return suma;
}

void mostrarArreglo(int arreglo[], int tamano) {
    for (int i = 0; i < tamano; i++) {
        std::cout << arreglo[i] << " ";
    }
    std::cout << std::endl;
}
