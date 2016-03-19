#include <bits/stdc++.h>
#include <cstdio>
#include <deque>

using namespace std;

int main() {
	deque<int> deck;
	int ent;
	cin >> ent;
	while(ent > 0) {
	    for(int i = 0 ; i < ent ; i++) {
		    deck.push_front(i + 1);
		}
		printf("%s","Discarded cards:");
	    
		for(int i = ent ; i > 1 ; i--) {
			    printf(" %i", deck.back());
			    if(i != 2) {
				    printf("%s",",");
			    }
			    deck.pop_back();		
			    deck.push_front(deck.back());
	
			    deck.pop_back();
		    }
            printf("%s", "\nRemaining card: ");
		    printf("%i\n", deck.back() );
	        
		cin >> ent;
		deck.clear();
	}
	return 0;
}
