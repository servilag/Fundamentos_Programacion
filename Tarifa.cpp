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
/* t en minutos
	t<15 -> 1000 el minuto
	15 <= t<= 30 -> 1500 el minuto
	30 < t -> 2000 el minuto
	
	solicitar
	- hora (entrada)
	- minutos (entrada)
	
	- hora (salida)
	- minutos (salida)
	
	regresa
	- tiempo hora,minutos
	- monto a pagar

	
//1 hora y 20 minutos = 6000...

		*/

int hora_entrada,hora_salida, resta_horas, horas_minuto,minuto_entrada, minuto_salida,resta_minutos;
float suma_minutos;

main(){
	printf("Introduzca su hora de entrada (hora militar))");
	scanf("%d",&hora_entrada);
	system("cls");
	printf("Introduzca su minuto de entrada(hora militar)");
	scanf("%d",&minuto_entrada);
	system("cls");
	printf("Introduzca su hora de salida(hora militar)");
	scanf("%d",&hora_salida);
	system("cls");
	printf("Introduzca su minuto de salida(hora militar)");
	scanf("%d",&minuto_salida);
	system("cls");
	
	resta_horas=hora_entrada-hora_salida;
	resta_horas = abs(resta_horas);
	horas_minuto= resta_horas*60;
	
	resta_minutos=minuto_entrada-minuto_salida;
	resta_minutos = abs(resta_minutos);
	
	suma_minutos= horas_minuto+resta_minutos;
	
	if ((suma_minutos<15)and(hora_entrada<hora_salida)){
		system("cls");
		printf("estuviste %d horas y %d minutos \n",resta_horas,resta_minutos);
		printf("serian %.0f pesos\n",1000*suma_minutos);
		printf("suma_minutos=%f, resta h: %d, resta m:%d",suma_minutos,horas_minuto,resta_minutos);
	}
	else if((suma_minutos<=15)and(suma_minutos<=30)and(hora_entrada<hora_salida)){
		system("cls");
		printf("estuviste %d horas y %d minutos\n",resta_horas,resta_minutos);
		printf("serian %f pesos\n",1500*suma_minutos);
		printf("suma_minutos=%f, resta h: %d, resta m:%d",suma_minutos,horas_minuto,resta_minutos);

	}
	else if((suma_minutos>30)and(hora_entrada<hora_salida)){	
		printf("estuviste %d horas y %d minutos\n",resta_horas,resta_minutos);
		printf("serian %f\n",ceil(suma_minutos/30)*2000);
		printf("suma_minutos=%f, resta h: %d, resta m:%d",suma_minutos,horas_minuto,resta_minutos);
	}
	else if (hora_entrada>hora_salida){
		//lo mismo que si suma minutos >30 pero sumando1440 que son 24 horas
		printf("estuviste %d horas y %d minutos\n",resta_horas+24,resta_minutos);
		printf("serian %f\n",96000+(ceil(suma_minutos/30)*2000));
		printf("suma_minutos=%f, resta  y %dh: %d, resta m:%d",suma_minutos,horas_minuto,resta_minutos);
	}
	else if ((hora_entrada==hora_salida)and(minuto_entrada>minuto_salida)){
		//lo mismo que si suma minutos >30 pero sumando1440 que son 24 horas
		printf("estuviste %d horas y %d minutos\n",resta_horas+24,resta_minutos);
		printf("serian %f\n",96000+(ceil(suma_minutos/30)*2000));
		printf("suma_minutos=%f, resta  y %dh: %d, resta m:%d",suma_minutos,horas_minuto,resta_minutos);
	}
	else if ((hora_entrada==hora_salida)and(minuto_entrada==minuto_salida)){
		//lo mismo que si suma minutos >30 pero sumando1440 que son 24 horas
		printf("estuviste %d horas y %d minutos\n",resta_horas+24,resta_minutos);
		printf("serian %f\n",96000+(ceil(suma_minutos/30)*2000));
		printf("suma_minutos=%f, horas a minuto=%d, resta minutos:%d",suma_minutos,horas_minuto,resta_minutos);
	}
	else{
		printf("h_entrada:%d, h_salida:%d, resta_h:%d, minutos_E:%d, minutos_S:%d, resta_m:%d ",hora_entrada,hora_salida, resta_horas,minuto_entrada, minuto_salida,resta_minutos);
	}
	
}