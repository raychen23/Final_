#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<stdbool.h>
#pragma warning( disable : 4996 )


bool isValidGuess(const char *guess) {
	int len = strlen(guess);

	if (len != 4) {
		return false;
	}

	for (int i = 0; i < len; i++) {
		if (guess[i] < '0' || guess[i] > '9') {
			return false;
		}
	}

	return true;
}