/* Presentar en orden (0 ascendente/ 1 descendente) 3 números reales ingresados por teclado */
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string>
using namespace std;
float A,B,C,D;

main(){
	printf("introduzca 3 numeros y como deseas ordenarlos 0 para forma ascendente y 1 para forma descendente\n");
	scanf("%f",&A);
	scanf("%f",&B);
	scanf("%f",&C);
	scanf("%d",&D);
	if((A==B)or(B==C)or(C==A)){
		printf("uno de los numeros se repite");
	}	
	if (D==1,(A>B)and(A>C)and(B>C)){
	     printf("el orden seria %f,%f,%f en forma descendente",A,B,C);
	    }
	else if (D==1,(B>A)and(B>C)and(A>C)){
	     printf("el orden seria %f,%f,%f en forma descendente",B,A,C);
	    }
	else if (D==1,(C>A)and(C>B)and(A>B)){
	     printf("el orden seria %f,%f,%f en forma descendente",C,A,B);
        }
	if (D==2,(A>B)and(A>C)and(B>C)){
	     printf("el orden seria %f,%f,%f en forma descendente",C,B,A);
	    }
	else if (D==2,(B>A)and(B>C)and(A>C)){
	     printf("el orden seria %f,%f,%f en forma descendente",C,A,B);
	    }
	else if (D==2,(C>A)and(C>B)and(A>B)){
	     printf("el orden seria %f,%f,%f en forma descendente",B,A,C);
        }
    
}
	
	