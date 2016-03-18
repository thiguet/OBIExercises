#include <bits/stdc++.h>
#include <cstdio>
#include <deque>
#include <conio.h>

using namespace std;

int main() {
	deque<int> deck;
	string txt = "";
	int ent;
	cin >> ent;
	while(ent > 0) {
		txt += "Discarded cards: ";
		for(int i = 0 ; i < ent ; i++) {
			deck.push_front(i + 1);
		}
		
		for(int i = ent ; i > 1 ; i--) {
			txt += (deck.back() + 48);
			if(i != 2) {
				txt += ", ";
			}
			deck.pop_back();		
			deck.push_front(deck.back());
	
			deck.pop_back();
		}

		txt += "\nRemaining card: ";
		txt += (deck.back() + 48);
		txt += "\n" ;
		cin >> ent;
		deck.clear();
	}
	cout << txt;
	return 0;
}

