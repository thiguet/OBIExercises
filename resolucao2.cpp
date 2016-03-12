#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int vetordeX[4]; 
	int vetordeY[4];
	
	int menorX, menorY, maiorX, maiorY;
	
   	int Resultado;

	for(int i=0 ; i<4 ; i++) {
		cin >> vetordeX[i] >> vetordeY[i];	
	}
	
    	menorX = 100000001;
	maiorX = -1;
	menorY = 100000001;
	maiorY = -1;

	for(int i=0 ; i<4 ; i++) {	
		if(menorX > vetordeX[i]) {
			menorX = vetordeX[i];			
			menorY = vetordeY[i];		
		}
		if(maiorX < vetordeX[i]) {
			maiorX = vetordeX[i];
			maiorY = vetordeY[i];		
		}	
	}
    	
	if(   (abs(maiorY - menorY) > 
	      (vetordeY[1] - vetordeY[0]) +
	      (vetordeY[3] - vetordeY[2]) ) || 
	      (abs(maiorX - menorX) >
	      (vetordeX[1] - vetordeX[0]) +
	      (vetordeX[3] - vetordeX[2]) ) ){
		Resultado = 0;	
	} else {
		Resultado = 1;
	}
	cout << Resultado;
    return 0;
}
