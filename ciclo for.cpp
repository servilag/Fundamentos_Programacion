#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string>
#include<stdlib.h>
#include<cmath>
//for (inicio;final;cambio)

using namespace std;
int A;
int B;
int C;
int D;
main(){
	/*
        //(valor de inicio; valor final;) cuanto aumenta//	
         //numero de repeticiones//
	for(A=0;A<=10; A++){
		printf("%d\n",A);
	}
	    descendente
	for(A=10;A>=0; A--){
		printf("%d\n",A);
    }
        razon de cambio de +2
	for(A=0;A<=10; A+=2){
		printf("%d\n",A);
    }
        final por el usuario
    scanf("%d",&B);
    	for(A=0;A<=B; A++){
		printf("%d\n",A);
    }
        inicio y final por el usuario
    scanf("%d",&A);
    scanf("%d",&B);
    if (B>A)
    	for(A;A<=B; A++){
		printf("\n%d\n",A);
    }
    else if(A>B)
    	for(A;A>=B; A--){
		printf("\n%d\n",A);
    }
    */
    //ascendente =1 descendente =0
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    scanf("%d",&D);
    if (C>=0){
    	if((B>A)and(D==1)){
	    	for(A;A<=B; A+=C){
			printf("\n%d\n",A);
     		}
   		}
     	else if((A>B)and(D==1)){
	    	for(B;B<=A; B+=C){
			printf("\n%d\n",B);
			}
   		}
    	if ((B>A)and(D==0)){
    		for(A;A<=B; B-=C){
			printf("\n%d\n",B);
			}
   		}
   		else if((A>B)and(D==0)){
		   
    		for(A;A>=B; A-=C){
			printf("%d\n",A);
			}
		}
    }
    else if(C<0){
		if((B>A)and(D==1)){
	    	for(B;B>=A; B+=C){
			printf("\n%d\n",B);
     		}
   		}
     	else if((B<A)and(D==1)){
	    	for(B;B<=A; B+=C){
			printf("\n%d\n",B);
			}
   		}
    	else if ((B>A)and(D==0)){
    		for(A;A<=B; B+=C){
			printf("\n%d\n",B);
			}
   		}
   		else if((B<A)and(D==0)){
		   
    		for(A;A>=B; A+=C){
			printf("%d\n",A);
			}
		}
	}
}