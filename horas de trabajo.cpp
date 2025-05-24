/* Elabore un programa que calcule el salario a cancelar a un trabajador que se le paga por hora.
Considere que las que superen las 40 horas, estas se cancelan al doble, y las horas trabajadas que
superan el valor de 48, estas se cancelan al triple. Ejemplo: valor hora 1 horas trabajadas
50; el valor a cancelar es 40+16+6=62.*/
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string>
using namespace std;
//la hora vale 10 dolares

int horas;

main(){
	printf("introduzca el numero de horas que ha trabajado\n");
	scanf("%d",&horas);
	if((horas<=40)and(horas>=0)){
		printf("tu paga es de %d",horas*10);
	}
	else if((horas>40)and(horas<=48)){
		printf("tu paga es de: %d $",400+(horas-40)*20);
	}
	else if(horas>48){
		printf("tu paga es de: %d $",400+160+(horas-48)*30);
	}
	else{
		printf("bro, no puedes trabajar %d, eso es negativo :v",horas);
	}
}