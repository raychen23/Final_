#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<stdbool.h>
#pragma warning( disable : 4996 )

void generateRandomAnswer(char *answer) {
    for (int i = 0; i < 4; i++) {
        answer[i] = rand() % 10 + '0';  // 產生 '0' 到 '9' 之間的隨機數字
    }
    answer[4] = '\0';  // 字串結尾
}
