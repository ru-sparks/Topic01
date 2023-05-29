#include "CaesarCypher.h"
#include <iostream>



char CaesarCypher::charCypher(char ch, int key)
{
	if (!isalpha(ch))
		return ch;

	char offset = isupper(ch) ? 'A' : 'a';
	return (char)((((ch + key) - offset) % AlphaLength) + offset);
}


