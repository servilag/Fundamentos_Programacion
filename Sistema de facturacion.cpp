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
//strcmp()=0
//strlen()

//clave 3 digitios parte 1
char inputClave[4];
char claveKarol[4]="666";
char claveMaria[4]="777";
char claveLuis[4]="888";
int intentos=3; //tras 3 intentos se bloquea
char ClaveSuper[4]="111"; //regresar a 1 con la clave correcta
//codigo de producto

int papa=123; //1000$ por kilo
int platano=456; //2000$ por kilo
int pina=789; // 1500$ por kilo
float productoInput=0;
float pesoPapa, pesoPlatano, pesoPina, pesoPapa1, pesoPlatano1, pesoPina1, iva;
//si codigo no exista no existe este producto
//ingresa codigo , peso/cantidad : hasta el codigo 100 el cual cierra factura
int Numproductos=0;


/*salida{
	cajero:
	cantidad productos:
	total precios:
	el iva del precio(19%):
	total a pagar:
*/
main(){
	cajero:
	system("cls");
	printf("Ingrese codigo del cajero\n");

	while(intentos>0){
		scanf("%s",&inputClave);
		if (strcmp(inputClave,claveKarol)==0){
			goto productos;
		}
		else if (strcmp(inputClave,claveMaria)==0){
			goto productos;
		}
		else if (strcmp(inputClave,claveLuis)==0){
			goto productos;
		}
		else{
			system("cls");
			intentos--;
			printf("Ese codigo no coincide, intentar otra vez (%d intentos restantes)\n",intentos);
		}
	}
	if(intentos<=0){
		system("cls");

		printf("bloqueado, llamar al supervisor\n");
		while (strcmp(inputClave,ClaveSuper)==0){
		printf("ingrese clave del supervisor\n");
		scanf("%s",&inputClave);
			if (strcmp(inputClave,ClaveSuper)!=0){
				intentos=3;
				goto cajero;
			}
		    else{
		    	system("cls");
		    	printf("clave incorrecta, intente otra vez\n");
			}						
		}	

	}

	
	productos:
	pesoPapa=0;
	pesoPlatano=0;
	pesoPina=0;

	system("cls");
	while(productoInput!=100){
		printf("Solicita tu producto\n");
		printf("Papa=123:  1000$ kg\n");
		printf("Platano=456:  2000$ kg\n");
		printf("Pina=789:  1500$ kg\n");
		printf("Crear Factura:100\n");
		scanf("%f",&productoInput);
		if(productoInput==123){
			system("cls");
			printf("codigo:123, Papa - ingresar peso: ");
			scanf("%f",&pesoPapa);
			system("cls");
			Numproductos++;
			pesoPapa1=pesoPapa1+pesoPapa;
		}
		else if(productoInput==456){
			system("cls");
			printf("codigo:456, platano - ingresar peso: ");
			scanf("%f",&pesoPlatano);
			system("cls");
			Numproductos++;
			pesoPlatano1=pesoPlatano1+pesoPlatano;
		}
		else if(productoInput==789){
			system("cls");			
			printf("codigo:789, pina - ingresar peso: ");
			scanf("%f",&pesoPina);
			system("cls");
			Numproductos++;
			pesoPina1=pesoPina1+pesoPina;
			
		}
		else if(productoInput==100){
			goto factura;
		}
		else{
		system("cls");	
		printf("no existe este producto\n");
			
		}	
		
	}
	factura:
	int precio= abs(pesoPapa1*1000)+ abs(pesoPlatano1*2000)+ abs(pesoPina1*1500);
	if(strcmp(inputClave,claveKarol)==0){
		system("cls");
		printf("Cajero: Karol\n");
		printf("Cantidad de producto: %d\n",Numproductos);
		printf("Precio: %d $\n",precio);
		printf("Iva: %.1f $\n",iva=precio*0.19);
		printf("Total: %.1f $\n",iva+precio);
	}
	else if(strcmp(inputClave,claveMaria)==0){
		system("cls");
		printf("Cajero: Maria\n");
		printf("Cantidad de producto: %d\n",Numproductos);
		printf("Precio: %d $\n",precio);
		printf("Iva: %.1f $\n",iva=precio*0.19);
		printf("Total: %.1f $\n",iva+precio);
	}
	else if(strcmp(inputClave,claveLuis)==0){
		system("cls");
		printf("Cajero: Luis\n");
		printf("Cantidad de producto: %d\n",Numproductos);
		printf("Precio: %d $\n",precio);
		printf("Iva: %.1f $\n",iva=precio*0.19);
		printf("Total: %.1f $\n",iva+precio);
	}
}

















