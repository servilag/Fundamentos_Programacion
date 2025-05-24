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
//comparar strings strcmp()


//primeros candidatos: Jose, Karol y Samuel
//si el mayor es voto en blanco -> no hay ganador
//no hay ganador => registrar 3 candidatos nuevos
//empate: nueva votacion entre los 2 empatados
//cerrar mesas => clave => 6666

	char candidato1[100]="Jose";
	char candidato2[100]="Karol";
	char candidato3[100]="Samuel";
	int votos1,votosblanco,seleccion;
	int votos2;
	int votos3;
	
	
	int seleccion_voto=0;
	int input=0;


main(){

	votacion:
	while(input!=6666){
		system("cls");
		printf("votos1:%d votos2:%d votos3:%d votosenblanco:%d \n",votos1,votos2,votos3,votosblanco);
		
		printf("elige por quien votar:\n");
		printf("1) %s\n",candidato1);
		printf("2) %s\n",candidato2);
		printf("3) %s\n",candidato3);
		printf("4) Voto en blanco\n");
		printf("5) cerrar:\n");
		scanf("%d",&seleccion_voto);
		if(seleccion_voto==1){
			votos1++;
		}
		else if(seleccion_voto==2){
			votos2++;
		}
		else if(seleccion_voto==3){
			votos3++;
		}
		else if(seleccion_voto==4){
			votosblanco++;
		}
		else if(seleccion_voto==5){
			system("cls");
			printf("introduce la clave\n");
			scanf("%d",&input);
			if(input==6666){
				goto resultado;
			}
			else{
				printf("clave incorrecta:");
			goto votacion;
			}
		}
		
	}
	
	resultado:
	if ((votosblanco>votos1)and(votosblanco>votos2)and(votosblanco>votos3)){
			input=0;
			system("cls");
			singanador:
			printf("no hay ganador, introducir 3 nuevos candidatos:\n");
			printf("candidato1:"); scanf("%99s",&candidato1);
			printf("candidato2:"); scanf("%99s",&candidato2);
			printf("candidato3:"); scanf("%99s",&candidato3);
			votos1=0;
			votos2=0;
			votos3=0;
			goto votacion;
	}							
	else if((votos1>votos2)&&(votos1>3)){
		system("cls");
		printf("Gano %s",candidato1);
	}
	
	else if((votos2>votos3)&&(votos2>votos1)){
		system("cls");
		printf("Gano %s",candidato2);
		printf("votos1:%d votos2:%d votos3:%d votosenblanco:%d \n",votos1,votos2,votos3,votosblanco);
	}
	else if((votos3>votos2)&&(votos3>1)){
		system("cls");
		printf("Gano %s",candidato3);
	}
	else if (votos1==votos2){
		system("cls");
		input=0;
		votos1=0;
		votos2=0;
		votos3=0;	
		
		while(input!=6666){
			system("cls");		
			printf("votos1:%d votos2:%d votos3:%d votosenblanco:%d \n",votos1,votos2,votos3,votosblanco);	
			printf("empate: votacion entre candidato 1 y cantidato 2:\n");
			printf("1) %s:\n",candidato1);
			printf("2) %s:\n",candidato2);
			printf("3) cerrar\n");
			scanf("%d",&seleccion);
			if (seleccion==1){
				votos1++;
				}
			else if (seleccion==2){
				votos2++;
				}
			
			else if (seleccion==3){
				system("cls");
				printf("introducir clave:");
				scanf("%d",&input);
				if(input==6666){
					goto resultado;
				}
			}
		}
	}         
    else if (votos2==votos3){                   
		system("cls");
		input=0;
		votos1=0;
		votos2=0;
		votos3=0;
		while(input!=6666){
			system("cls");	
			printf("votos1:%d votos2:%d votos3:%d votosenblanco:%d \n",votos1,votos2,votos3,votosblanco);		
			printf("empate: votacion entre candidato 2 y cantidato 3:\n");
			printf("1) %s:\n",candidato2);
			printf("2) %s:\n",candidato3);
			printf("3) cerrar\n");
			scanf("%d",&seleccion);
			if (seleccion==1){
				votos2++;
				}
			else if (seleccion==2){
				votos3++;
				}
			
			else if (seleccion==3){
				system("cls");
				printf("introducir clave:");
				scanf("%d",&input);
				if(input==6666){
					goto resultado;
				}
			}
		}
	}
	else if (votos1==votos3){
		system("cls");
		input=0;
		votos1=0;
		votos2=0;
		votos3=0;
		while(input!=6666){
			system("cls");	
			printf("votos1:%d votos2:%d votos3:%d votosenblanco:%d \n",votos1,votos2,votos3,votosblanco);		
			printf("empate: votacion entre candidato 1 y cantidato 3:\n");
			printf("1) %s:\n",candidato1);
			printf("2) %s:\n",candidato3);
			printf("3) cerrar\n");
			scanf("%d",&seleccion);
			if (seleccion==1){
				votos1++;
				}
			else if (seleccion==2){
				votos3++;
				}
			
			else if (seleccion==3){
				system("cls");
				printf("introducir clave:");
				scanf("%d",&input);
				if(input==6666){
					goto resultado;
				}
			}
		}
	}
	else{printf("pvta");}	
}