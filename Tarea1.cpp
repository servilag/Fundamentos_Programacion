#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string>
using namespace std;
// Elaborar un algoritmo para establecer si 5 números ingresados por teclado corresponden a una secuencia incremental
int A,B,C,D,E;
/*


	
	
*/
main(){
	printf("introduce 5 numeros distintos separados");
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);
	scanf("%d",&D);
	scanf("%d",&E);
	if((B==A+1)&&(C==B+1)&&(D==C+1)&&(E==D+1)){
		printf("son una secuencia incremental");
	}
	else{
		printf("no es una secuencia incremental");
	}
	

}