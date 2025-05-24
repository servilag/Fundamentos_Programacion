#include <stdio.h>

int main() {
    int n, i, j;
    double suma = 0.0;

    // Validar el tamaño de la matriz cuadrada
    do {
        printf("Ingrese el tamano de la matriz cuadrada (mayor que 0): ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("Error: el tamano debe ser mayor que cero.\n");
        }
    } while (n <= 0);

    double matriz[n][n];

    // Ingreso y validación de los elementos de la matriz
    printf("\nIngrese los elementos de la matriz (pueden ser decimales):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            int valido = 0;
            while (!valido) {
                printf("Elemento [%d][%d]: ", i + 1, j + 1);
                if (scanf("%lf", &matriz[i][j]) != 1) {
                    printf("Entrada invalida. Ingrese un numero valido (entero o decimal).\n");
                    while (getchar() != '\n');
                } else {
                    valido = 1;
                }
            }
        }
    }

    // Mostrar la matriz
    printf("\nMatriz ingresada:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%8.2lf", matriz[i][j]); // 8 espacios, 2 decimales
        }
        printf("\n");
    }

    // Calcular y mostrar la suma de la diagonal principal
    printf("\nElementos en la diagonal principal: ");
    for (i = 0; i < n; i++) {
        printf("%.2lf ", matriz[i][i]);
        suma += matriz[i][i];
    }

    printf("\nSuma de la diagonal principal: %.2lf\n", suma);

    return 0;
}