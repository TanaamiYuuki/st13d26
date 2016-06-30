#include <stdio.h>

#define DATA_SIZE 4

int main (void)
{
	int x = 0;
	int i = 0;
	int numbers[DATA_SIZE] = {1, 2, 3, 4};
	int scores[DATA_SIZE] = {60, 65, 33, 90};
	
	
	scanf("%d", &x);

	i = 0;
	while(1) {
		if(scores[i] == x) {
			printf("出席番号%dが%d点でした。\n", numbers[i], scores[i]);
			break;
		}
		if (numbers[i] != 0) {
			printf("合致するデータがありません。\n");
			break;
		}
		++i;
	}
	return 0;
}
