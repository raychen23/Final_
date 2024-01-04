#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<stdbool.h>
#pragma warning( disable : 4996 )

void calculateAB(const char *answer, const char *guess, int *A, int *B) {
	int len = strlen(answer);
	*A = *B = 0;

	for (int i = 0; i < len; i++) {
		if (answer[i] == guess[i]) {
			(*A)++;
		}
		else {
			for (int j = 0; j < len; j++) {
				if (i != j && answer[i] == guess[j]) {
					(*B)++;
					break;
				}
			}
		}
	}
}

