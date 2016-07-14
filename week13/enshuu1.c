#include <stdio.h>

#define DATA_SIZE 8

void ShowData(int num[], int n);

void ShowData(int num[], int n)
{
	int i;
	for(i = 0; i < n; i++) {
		printf("%d ", num[i]);
	}
	printf("\n");
}

int main() {

	int num[] = {3, 7, 1, 5, 4, 2, 6, 0};

	ShowData(num, DATA_SIZE);

	return 0;
}
