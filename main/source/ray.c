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
		printf("輸入猜的數字(4位數字)\n");
		scanf("%s", guess);
		while (!isValidGuess(guess)) {
			printf("請輸入正確格式\n");
			scanf("%s", guess);
		}
		calculateAB(answer, guess, &a, &b);

		printf("結果為%dA,%dB\n", a, b);
		attempts = attempts + 1;

		if (a == 4) {
			printf("恭喜你猜對了\n");
			displayGameStats(attempts);
			break;
		}

	}

	if (attempts = 10 && a != 4) {
		printf("你10次都沒猜對,正確答案是%s\n", answer);
		printf("遊戲統計：\n");
		printf("總嘗試次數：10 \n");
	}
}