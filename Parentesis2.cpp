#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	char text[1001];
 	int abre = 0,
        fecha = 0;		
 	int i = 0;
 
 	while(cin >> text) {
 		if(text[i] == '(') {
 			abre++;	
 		}		
 		i++;	 
   }	
 	if(abre == fecha) {
 		cout << "correct" << endl;
 	} else {
 		cout << "incorrect" << endl;
 	} 	
 	return 0;
 }
