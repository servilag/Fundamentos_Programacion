#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string>
#include<stdlib.h>
#include<cmath>
#include <cstdlib>
#include <stdlib.h>
#include <cstring>
using namespace std;
//	system("cls"); limpiar consola

   //dinero inicial 100.000k//
//cajero automatico
//cambio clave de 4 digitos
//retiro de cuenta de ahorros
//deposito en cuneta ahorros
//saldo de cuenta

    //condiciones extra//
//cada retiro/deposito debe mostrar el saldo
//con 3 intentos fallidos de clave se bloquea (mensaje) y cierra el programa
//Al cambiar la clave se regresa al menu inicial
//al final de cada operacion se debe preguntar si desea hacer otra operacion o salir

int retiro, deposito, seleccion,operacion;
int dinero=100000;
char clave[99]="2222";
int intentos=3;
char input[99];


main(){


	lobby:
	
	system("cls");
		printf("inserte su clave\n");
	while(input!=clave){
		
		scanf("%s",&input);
		int input_size = strlen(input);
    	
    	
		if((strcmp(input, clave) == 0)and(input_size==4)){
			goto menu;
		}
		else if((intentos>0)and((input!=clave)or(input_size!=4))){
 			system("cls");			
			printf("clave incorrecta intentar de nuevo: tiene %d intentos \n",intentos);	
	 		intentos--;	
	 		printf("%s y %s y %d",input, clave,input_size);
		}
		else if((intentos<=0)and((input!=clave)or(input_size!=4))){
			system("cls");
			printf("te quedaste sin intentos:");
			return(0);
		}
		
	}
	menu:
	seleccion=5;
	system("cls");
	printf("Que desea hacer: \n\n");
	printf("retiro de cuenta ahorros: 1\n");
	printf("deposito de cuenta de ahorros: 2\n");
	printf("ver saldo: 3\n");
	printf("cambiar clave: 4\n");
	printf("Salir:0\n");
	
	scanf("%d",&seleccion);
	
	if(seleccion==1){
		system("cls");		
		printf("Insertar valor a retirar:\n");		
		scanf("%d",&retiro);	
		if (retiro>dinero){
			system("cls");
			printf("no tienes suficiente dinero\n");
			printf("desea hacer otra operacion(1) o salir(2)?\n");
			scanf("%d",&operacion);
			if (operacion==1){
				goto menu;
			}
			else if (operacion==2){
				system("cls");
				goto lobby;
			}			
		}
		else if (retiro<=dinero){
			system("cls");
			printf("Retiraste %d, te queda un saldo de %d \n",retiro,dinero=dinero-retiro);
			printf("desea hacer otra operacion(1) o salir(2)?\n");
			scanf("%d",&operacion);
			if (operacion==1){
				goto menu;
			}
			else if (operacion==2){
				system("cls");
				goto lobby;
			}
		}
	}
	if(seleccion==2){
		system("cls");
		printf("insertar valor a depositar\n");
		scanf("%d",&deposito);
		if (deposito>=0){
			system("cls");
			printf("Depositaste %d, ahora tienes un saldo de %d\n",deposito,dinero=dinero+deposito);
			printf("desea hacer otra operacion(1) o salir(2)?\n");
			scanf("%d",&operacion);
			if (operacion==1){
				goto menu;
			}
			else if (operacion==2){
				system("cls");
				goto lobby;
			}
		}
	}
	if(seleccion==3){
		system("cls");
		printf("tu saldo es de %d \n",dinero);
		printf("desea hacer otra operacion(1) o salir(2)?\n");
		scanf("%d",&operacion);
		if (operacion==1){
			goto menu;
		}
		else if (operacion==2){
			system("cls");
			goto lobby;
		}
	}	
	if(seleccion==4){
		system("cls");
		printf("ingrese su nueva clave\n");
		scanf("%s",&clave);
		int clave_size= strlen(clave);
		if(clave_size==4){
		goto lobby;
		}
		else{
			printf("esa clave no cumple con los parametros");
			printf("desea hacer otra operacion(1) o salir(2)?\n");
			scanf("%d",&operacion);
			if (operacion==1){
				goto menu;
			}
			else if (operacion==2){
				system("cls");
				goto lobby;
			}
			
		}
	}			
	if (seleccion==0){
		goto lobby;
	}				
}