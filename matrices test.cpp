#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int matriz[3][3] = {
        {2, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Mostrar la matriz
    for (int i = 0; i < 3; ++i) {           // filas
        for (int j = 0; j < 3; ++j) {       // columnas
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
   //////////////////////sumas//////////////////////////////77
    // Declaración e inicialización de las matrices A y B
    int A[2][2] = {
        {1, 2},
        {3, 4}
    };

    int B[2][2] = {
        {5, 6},
        {7, 8}
    };

    // Matriz para almacenar el resultado de la suma
    int C[2][2];

    // Suma de matrices A y B, resultado en C
    for (int i = 0; i < 2; ++i) {         // Recorremos filas
        for (int j = 0; j < 2; ++j) {     // Recorremos columnas
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Mostrar la matriz resultado
    printf("Matriz resultado (C = A + B):\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d ", C[i][j]);  // %d para enteros
        }
        printf("\n");
    }
    return 0;

}

