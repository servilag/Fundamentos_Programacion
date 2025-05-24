#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string>
#include<stdlib.h>
#include<cmath>
#include<cstdlib>
#include<stdlib.h>
#include<math.h>
using namespace std;
int a;
main(){ //matrices
	printf("Insertar tamaño de la matriz cuadrada: "); scanf("%d",&a);

	   int A[a][a];
	   
    for (int i = 0; i < a; ++i) {    // Recorremos filas
        for (int j = 0; j < a; ++j) {     // Recorremos columnas
			printf("inserte numero coordenada; %d,%d  para matriz A\n ",i+1,j+1); //reconocer coordenada
            scanf("%d",&A[i][j]);
            printf(" ");
        }
        system("cls");
        printf("\n");
    }
    

    int B[a][a];
    system("cls");
    for (int i = 0; i < a; ++i) {         // Recorremos filas
        for (int j = 0; j < a; ++j) {     // Recorremos columnas
			printf("inserte numero coordenada; %d,%d  para matriz B\n ",i+1,j+1); //reconocer coordenada
        	scanf("%d",&B[i][j]);
        	printf(" ");
        }
        printf("\n");
    }
    

    // vector para almacenar el resultado de la suma de las diagonales
    int C[a];

    // Suma de diagonales A y B, resultado en C
    for (int i = 0; i < a; ++i) {         // Recorremos filas
        for (int j = 0; j < a; ++j) {     // Recorremos columnas
            C[i] = A[i][i] + B[i][i];
        }
    }

    // Mostrar resultado
    printf("suma de diagonales A + B:\n");
    for (int i = 0; i < a; ++i) {
            printf("%d ", C[i]);  // %d para enteros
    }
    return 0;
}