/*Para un número comprendido entre 1 y 9999; elaborar un algoritmo que indique la cantidad de
dígitos que lo componen.*/
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string>
using namespace std;
int num;

main(){
	printf("introduce un numero del 1-9999\n");
	scanf("%d",&num);
	if((num>9999)or(num<1)){
		printf("tu numero esta fuera del rango");
	}
	else{
	string numero=to_string(num);
	printf("tu numero tiene %d numeros",numero.length());
	}
}