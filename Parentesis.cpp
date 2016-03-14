#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
    char v[1000];    
    int i = 0, 
        res = 0;
    
    for(int i = 0 ; i < 1000 ; i++ ) {
            v[i] = 0;        
    }        
    
    for(int j = 0 ; j < 10000 ; j++ ) {
            i = 0;
            while(getch() != 13) {
                      v[i] = getch();
                      if(v[i] == '(') {
                              cout << "\n";
                           res++;   
                      }       
                      if(v[i] == ')') {
                              cout << "\n";
                           res--;
                      }
                      
                      if(res < 0 || v[i] == '\0' )
                             break;
                      i++;
            }
            if(res == 0) {
 		          cout << "correct" << endl;
            } else {
                  cout << "incorrect" << endl;
            } 	
    }	
 	
    return 0;
}    
