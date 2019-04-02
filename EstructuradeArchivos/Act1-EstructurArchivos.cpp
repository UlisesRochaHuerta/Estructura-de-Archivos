#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<iostream>

int i,j,fil=3,col=3;
int A[100][100];

int main(){	
	printf("\n---------------------------------------------------\n");
	printf("INGRESE EL VALOR DE LA MATRIZ\n\n");
	//INGRESE LA MATRIZ
		for (i=1;i<=3;i++){
			for (j=1;j<=3;j++){
				printf("(%d,%d)= ",i,j);
   				scanf ("%d",&A[i][j]);
   					while(A[i][j]>255){
   						printf("Por favor vuelve a ingresar un valor menor a 256\nA(%d,%d)= ",i,j);
   						scanf ("%d",&A[i][j]);
				   	}
			}
		}
		
system("CLS");
		
	//imprime matriz ingresada
	printf("\n\nLA MATRIZ INGRESADA FUE:\n\n");
    	for(i=1;i<=fil;i++){
    		printf("\n");
        	for(j=1;j<=col;j++){
				printf("%10d  ",A[i][j]);
    	    	//printf("\n");
    	    	if(j==3||j==6||j==9)
    	    	printf("\n");
    	    }
	    }

	printf("\n\nDE LA MATRIZ ANTERIOR LOS NUMEROS MAYORES A 128 SE VOLVERAN A UN VALOR 1.\n");
	printf("Y LOS NUMEROS MENORES A 128 SE VOLVRAN 0 .\n");

	printf("\n\nLA MATRIZ EN BINARIO ES :\n\n");
    	for(i=1;i<=fil;i++){
    		printf("\n");
        	for(j=1;j<=col;j++){
				//printf("%10f  ",A[i][j]);
				if(A[i][j]>=128){//1
					printf("%10d", (A[i][j]*0)+1);
				}else if(A[i][j]<128){//1
					printf("%10d", (A[i][j]*0));
				}
    	    	if(j==3||j==6||j==9)
    	    	printf("\n");
    	    }
	    }
	    
printf("PRESIONA UNA TECLA...");
system("pause");
system("CLS");
printf("\nDe la matriz binaria procederemos a ordenarla y convertir el resultado en un numero decimal\n");

	printf("\n\nEL NUMERO BINARIO ES :\n\n");
    	for(i=1;i<=fil;i++){
        	for(j=1;j<=col;j++){
				if(A[i][j]>=128){//0
					printf("%d", (A[i][j]*0)+1);
				}else if(A[i][j]<128){//1
					printf("%d", (A[i][j]*0));
				}
    	    }
	    }

	return 0;
}
