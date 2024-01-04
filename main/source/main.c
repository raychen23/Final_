#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<stdbool.h>
#pragma warning( disable : 4996 )
#include"ray.h"
#include"jason.h"
#include"jason1.h"
#include"William.h"
#include"William1.h"

void playGame(const char answer);
void calculateAB(const charanswer, const char guess, int A, int B);
bool isValidGuess(const charguess);
void generateRandomAnswer(const answer);
void displayGameStats(int attempts);

int main() {
	srand((unsigned int)time(NULL));
	char answer[5];
	
	generateRandomAnswer(answer);

	printf("歡迎來到猜數字遊戲\n");
	playGame(answer);
	//printf("%s",answer);
	return 0;
}