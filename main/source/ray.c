#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<stdbool.h>
#pragma warning( disable : 4996 )

void playGame(const charanswer) {
	int max = 10;
	char guess[5];
	int a, b;
	int attempts = 0;
	for (int i = 0; i < 10; i++) {
		printf("��J�q���Ʀr(4��Ʀr)\n");
		scanf("%s", guess);
		while (!isValidGuess(guess)) {
			printf("�п�J���T�榡\n");
			scanf("%s", guess);
		}
		calculateAB(answer, guess, &a, &b);

		printf("���G��%dA,%dB\n", a, b);
		attempts = attempts + 1;

		if (a == 4) {
			printf("���ߧA�q��F\n");
			displayGameStats(attempts);
			break;
		}

	}

	if (attempts = 10 && a != 4) {
		printf("�A10�����S�q��,���T���׬O%s\n", answer);
		printf("�C���έp�G\n");
		printf("�`���զ��ơG10 \n");
	}
}