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

main(){
	int filas, columnas, seleccion;
	float valor;
	printf("seleccione 1 de las 3\n1:cuadrado\n2:triangulo\n3:piramide\n");
	scanf("%d",&seleccion);
	
	//cuadrado
	if (seleccion==1){
		system("cls");
		printf("valor del cuadrado:");
		scanf("%d",&valor);
		fila:
		columnas=0;
		while(columnas<valor){
			printf("*");
			columnas++;
		}
		if (filas<valor-1){
			printf("\n");
			filas++;
			goto fila;
		}
	}
	//cuadrado
	//triangulo
	if(seleccion==2){		
		system("cls");
		printf("valor del triangulo:");
		scanf("%d",&valor);
 	  	for (columnas = 1; columnas <= valor; columnas++) {
     	   	for (filas = 0; filas < columnas; filas++) {
            printf("*");
			}	
			printf("\n");
		}
			
				
	}
	//triangulo
	//piramide
		if(seleccion==3){		
		system("cls");
		printf("valor de la piramide:");
		scanf("%f",&valor);
 	  	for (columnas = 1; columnas <= valor*2; columnas+=2) {
     	   	for (filas = valor*2; filas >= columnas; filas-=2) {
            printf(" ");
			}
     	   	for (filas = 0; filas < columnas; filas++) {
            printf("*");
			}	
			printf("\n");
		}
			
				
	}

}
