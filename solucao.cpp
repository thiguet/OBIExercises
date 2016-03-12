#include <bits/stdc++.h>


using namespace std;

int main() {
	char text[1001];
	int abre = 0,
            fecha = 0;		
	int i = 0;

	while(cin >> text && text[i] != '\0') {
		while(text[i] != '\0') {	
			if(text[i] == '(') {
				abre++;	
			}		
			if(text[i] == ')') {
				fecha++;
			}
			i++;	
		}
	}	
	if(abre == fecha) {
		cout << "correct" << endl;
	} else {
		cout << "incorrect" << endl;
	} 	
	return 0;
}


// UVA 10935
// UVA 11988
