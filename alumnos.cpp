#include<conio.h>
#include<stdio.h>
#include<string>
#include<stdlib.h>
#include<cmath>
#include <cstdlib>
#include <stdlib.h>
#include <cstring>
#include <stdio.h>
#include <stdbool.h>

#define MAX_ALUMNOS 99
//Jeysson Orlando y Hernan Torres
int main() {
	char CODIGO[99];
    int cantidad = 0, i, opcion;
    int codigos[MAX_ALUMNOS];
    int sexos[MAX_ALUMNOS]; // 0-Femenino, 1-Masculino
    float algebra[MAX_ALUMNOS];
    float fundamentos[MAX_ALUMNOS];
    int codigo_buscar;
    bool encontrado;
	int pos,c;
    // Ingreso de la cantidad de alumnos (solo enteros)
    do {
        printf("Ingrese la cantidad de alumnos (1-99): ");
        if (scanf("%d", &cantidad) != 1) {
            printf("Entrada invalida. Ingrese un numero entero.\n");
            cantidad = 0;
        } 
		else if (cantidad <= 0 || cantidad > 99) {
            printf("Error: La cantidad debe estar entre 1 y 99.\n");
        }
        else if ((c = getchar()) != '\n') {
        printf("Entrada invalida. No se permiten decimales ni caracteres extra.\n");
        cantidad = 0;
    	}
        while (getchar() != '\n'); // Limpiar el buffer
    } while (cantidad <= 0 || cantidad > 99);

    // Ingreso de datos de los alumnos
    printf("\nIngrese los datos de los alumnos:\n");
    for (i = 0; i < cantidad; i++) {
    	system("cls");
        printf("\nAlumno %d:\n", i + 1);
       	
        // Código del alumno (exactamente 3 dígitos, 000-999, y único)
        bool codigo_valido;
        do {
            codigo_valido = true;
            printf("  Codigo (3 digitos, 000-999): ");
            fgets(CODIGO, sizeof(CODIGO), stdin);
            CODIGO[strcspn(CODIGO, "\n")] = '\0';
            // Leer como número pero verificar que tenga exactamente 3 dígitos
	      	if (strlen(CODIGO) != 3) {
	      	      printf("Entrada invalida. Asegurese que tenga 3 digitos\n");
	      	      codigo_valido = false;
	      	}
	     	// Verificar que es un número y está en el rango
	      	else if (sscanf(CODIGO, "%d", &codigos[i]) != 1 || codigos[i] < 0 || codigos[i] > 999) {
	      	    	printf("Entrada invalida. Asegurese que no tiene ningun caracter y es un numero entre 000 y 999.\n");
	        	    codigo_valido=false;
			}
			else if (sscanf(CODIGO, "%d%n", &codigos[i], &pos) != 1 || CODIGO[pos] != '\0') {
  				  printf("Entrada invalida. No debe contener decimales ni caracteres extra.\n");
  				  codigo_valido = false;
			}
            // Verificar que no esté repetido
            else {
                for (int j = 0; j < i; j++) {
                    if (codigos[j] == codigos[i]) {
                        printf("Error: Este codigo ya fue registrado para otro alumno.\n");
                        codigo_valido = false;
                    }
                }
            }
        } while (!codigo_valido);
       
        // Sexo del alumno
        do {
            printf("  Sexo (0-Femenino, 1-Masculino): ");
            if (scanf("%d", &sexos[i]) != 1) {
                printf("Entrada invalida. Ingrese 0 o 1.\n");
                sexos[i] = -1;
            } else if (sexos[i] != 0 && sexos[i] != 1) {
                printf("Error: Ingrese 0 para Femenino o 1 para Masculino.\n");
            }
            while (getchar() != '\n');
        } while (sexos[i] != 0 && sexos[i] != 1);
       
        // Nota de Algebra
        do {
            printf("  Nota Algebra (0.0-5.0): ");
            if (scanf("%f", &algebra[i]) != 1) {
                printf("Entrada invalida. Ingrese un numero decimal.\n");
                algebra[i] = -1;
            } else if (algebra[i] < 0.0 || algebra[i] > 5.0) {
                printf("Error: La nota debe estar entre 0.0 y 5.0.\n");
            }
            while (getchar() != '\n');
        } while (algebra[i] < 0.0 || algebra[i] > 5.0);
       
        // Nota de Fundamentos
        do {
            printf("  Nota Fundamentos de Programacion (0.0-5.0): ");
            if (scanf("%f", &fundamentos[i]) != 1) {
                printf("Entrada invalida. Ingrese un numero decimal.\n");
                fundamentos[i] = -1;
            } else if (fundamentos[i] < 0.0 || fundamentos[i] > 5.0) {
                printf("Error: La nota debe estar entre 0.0 y 5.0.\n");
            }
            while (getchar() != '\n');
        } while (fundamentos[i] < 0.0 || fundamentos[i] > 5.0);
    }




    // Menú principal
    system("cls");
    do {
        printf("\n=== MENU PRINCIPAL ===\n");
        printf("1. Promedio de Algebra\n");
        printf("2. Mayor nota de Fundamentos de Programacion\n");
        printf("3. Cantidad de Alumnos Femeninos y Masculinos\n");
        printf("4. Buscar notas por codigo\n");
        printf("5. Salir\n");
       
        do {
        	
            printf("Seleccione una opcion (1-5): ");
            if (scanf("%d", &opcion) != 1) {
                printf("Entrada invalida. Ingrese un numero entre 1 y 5.\n");
                opcion = 0;
            }
            while (getchar() != '\n');
        } while (opcion < 1 || opcion > 5);
       
        switch (opcion) {
            case 1: {
                // Promedio de Algebra
                system("cls");
                float suma = 0.0;
                for (i = 0; i < cantidad; i++) {
                    suma += algebra[i];
                }
                printf("\nPromedio de Algebra: %.2f\n", suma / cantidad);
                break;
            }
            case 2: {
                // Mayor nota de Fundamentos
                system("cls");
                float mayor = 0.0;
                for (i = 0; i < cantidad; i++) {
                    if (fundamentos[i] > mayor) {
                        mayor = fundamentos[i];
                    }
                }
                printf("\nMayor nota de Fundamentos de Programacion: %.1f\n", mayor);
                break;
            }
            case 3: {
                // Contar por sexo
                system("cls");
                int femeninos = 0, masculinos = 0;
                for (i = 0; i < cantidad; i++) {
                    if (sexos[i] == 0) {
                        femeninos++;
                    } else {
                        masculinos++;
                    }
                }
                printf("\nFemeninos: %d - Masculinos: %d\n", femeninos, masculinos);
                break;
            }
            case 4: {
                // Buscar por código (hasta encontrar uno válido)
                system("cls");
                do {
                    printf("\nIngrese el codigo del alumno a buscar (3 digitos): ");
                    if (scanf("%d", &codigo_buscar) != 1) {
                    	system("cls");
                        printf("Entrada invalida. Ingrese un numero de 3 digitos.\n");
                    }
                    else if (codigo_buscar < 0 || codigo_buscar > 999) {
                    	system("cls");
                        printf("Error: El codigo debe tener exactamente 3 digitos (000-999).\n");
                    }
                    else {
                        encontrado = false;
                        for (i = 0; i < cantidad; i++) {
                            if (codigos[i] == codigo_buscar) {
                                printf("\nAlumno encontrado:\n");
                                printf("Codigo: %03d\n", codigos[i]); // Mostrar con 3 dígitos
                                printf("Nota Algebra: %.1f\n", algebra[i]);
                                printf("Nota Fundamentos: %.1f\n", fundamentos[i]);
                                encontrado = true;
                                break;
                            }
                        }
                        if (!encontrado) {
                            printf("No se encontro un alumno con el codigo %03d. Intente nuevamente.\n", codigo_buscar);
                        }
                    }
                    while (getchar() != '\n');
                } while (!encontrado);
                break;
            }
            case 5:
            	system("cls");
                printf("\nSaliendo del programa...\n");
                break;
        }
    } while (opcion != 5);

    return 0;
}