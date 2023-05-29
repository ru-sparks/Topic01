#include <iostream>
#include "Runner.h"
#include "CaesarCypher.h"

using namespace std;


void Runner::run() {

	cout << "Hello, World\n";

	int key = 11;
	CaesarCypher cypher;

	char ch = cypher.charCypher('A', key);
	
	for (char ch = 'A'; ch <= 'Z'; ch++) {
		char enCh = cypher.charCypher(ch, key);
		cout << ch << " Encrypted: " << enCh;
		cout << " Decrypted: " << cypher.charCypher(enCh, cypher.AlphaLength - key) << endl;

	}

	for (char ch = 'a'; ch <= 'z'; ch++) {
		char enCh = cypher.charCypher(ch, key);
		cout << ch << " Encrypted: " << enCh;
		cout << " Decrypted: " << cypher.charCypher(enCh, cypher.AlphaLength - key) << endl;

	}


}