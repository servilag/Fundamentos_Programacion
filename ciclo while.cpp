#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string>
#include<stdlib.h>
#include<cmath>
using namespace std;
int B,C,E;
float A;

/*inicio
  while (fin){
  
  cambio
  }
*/

main(){
	/*
	
	printf("variables\n");
	printf("Inicio= "); scanf("%d",&A); //inicio
	printf("Final= "); scanf("%d",&B); //fin
	printf("Base= "); scanf("%d",&C); //base
	printf("resultados\n");
	E=C;
	
	while(A<=10){
		printf("%d\n",A);
   	    A++;
	}	
	
	do
	{
		printf("%d\n",A);
		A++;	
	}while(A<=10);
	
	while(A<=B){
		printf("%d X %d = %d\n",C,A,E=C*A);		
		A++;
	}
	*/		
    B=3;
    printf("ingresa tu codigo, tienes 3 intentos\n");
		while(A!=666){ scanf("%f",&A);
		
			string D = to_string(A);
			int F=D.size();
			
			if(F!=10){ printf("ingrese un numero de 3 cifras:\n");
				
			}
			
			else if((A!=666)and(B>0)){
			printf("incorrecto, te quedan %d intentos\n",B);
			B--;
			}
			else if ((B==0)and(A!=666)){
				printf(" te quedaste sin intentos");
				break;
				}
			else if (A==666){
				printf("ingresaste");
				break;		
			}
	
		}
}