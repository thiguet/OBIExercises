#include <bits/stdc++.h>
#include <cstdio>
#include <deque>

using namespace std;

int main() {
	deque<int> deck;
	int ent;
	cin >> ent;	
	while(ent > 0) {
		printf("%s", "Discarded cards: ");		
		scanf("%d", ent);	
		for(int i = 0 ; i < ent ; i++) {		
			deck.push_front(i + 1);
		}
		for(int i = ent ; i > 1 ; i--) {
			printf("%s", deck.back() + ", ");
			deck.pop_back();

			deck.push_front(deck.back());

			printf("%s", deck.back() + ", ");
			deck.pop_back();
		}	

		
		printf("%s", "\nRemaining card: ");	
		printf("%s", + deck.back() + "\n" );
	}
	return 0;
}
