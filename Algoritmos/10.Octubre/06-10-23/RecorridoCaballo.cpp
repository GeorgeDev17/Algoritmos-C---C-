/*Autor: Jorge Alberto Bedoya Montoya
Dev C++ versión: 5.11
Plataforma OS: Parrot Linux 6.1.0
Ultima actualización: 06-10-2023*/

/*--------------------------------------------------------------------------------------------------
Algoritmos Lenguaje C
    --- Recorrido del caballo ---
 
--------------------------------------------------------------------------------------------------*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
int main(){
	
	int i,j;
	srand(time(NULL));
	int mat[5][5];
	char band='f';
		while (band=='f'){
	for(i=0;i<5;i++){
	for(j=0;j<5;j++){
	mat[i][j]=0; } }
	mat[0][0]=1;
	int D1=0,D2=0; i=0; j=0;
	int cont=1,lanzamientos;
	while(lanzamientos<300){
	D1=rand()%6;
	D2=rand()%6;
	int posi= abs(D1-i);
	int posj=abs(D2-j);
	if(((posi==2)&&(posj==1))||((posi==1)&&(posj==2))){
	if(mat[D1][D2]==0){
	cont++;
	mat[D1][D2]=cont;
	posi=D1;
	posj=D2;
	lanzamientos=0; }
	for(i=0;i<5;i++){
	for(j=0;j<5;j++){
	printf("%d\t",mat[i][j]);
	}
	printf("\n");
	}
	printf("\n");
	}else{
	lanzamientos++; } }
	if(cont==25){
	band='t'; } }
	for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
	printf("%d\t",mat[i][j]);
	}
	printf("\n");
	}
}
