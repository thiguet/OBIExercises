#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <deque>
#include <conio.h>

using namespace std;

string confere(string txt) {
    deque<char> fila;
    deque<char>::iterator it;
    string retorno;
    
    bool comeco = false;
    
    for(int i = 0 ; i < txt.length() ; i++) { 
            if(txt[i] == '[') {
                comeco = true;
                
                it = fila.begin();         
            }  else if(txt[i] == ']') {
                comeco = false;      
            }
            if(comeco && ((txt[i] != '[') && (txt[i] != ']'))) {
                 fila.insert(it, txt[i]); 
            } else if ((txt[i] != '[') && (txt[i] != ']')){ 
                 fila.push_back(txt[i]);
            }
    }
    for(int i = 0 ; i < fila.size() ; i++ ) {
            retorno[i] = fila[i];
            cout << retorno[i];
    }
    
    return retorno;
}

int main() {
    char txt[100001];
    while(scanf("%s", txt) != EOF) {
              cout << confere(txt);          
    }           
}
