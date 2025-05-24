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
int notas[3][3]={
	{1,2,3},
	{4,5,6},
	{7,8,9}
};
main(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",notas[i][j]);
		}
		printf("\n"); 
	}
	
}