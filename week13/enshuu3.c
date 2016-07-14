#include <stdio.h>

#define DATA_SIZE 8

void ShowData(int num[], int n);
void BubbleSort(int num[], int n);

void ShowData(int num[], int n)
{
	int i;
	for(i = 0; i < n; i++) {
		printf("%d ", num[i]);
	}
	printf("\n");
}

void BubbleSort(int x[], int n)
{
	int i, j, temp;
	for(i = 0; i < n-1; i++) {
		for(j = n-1; j > i; j--){
			if(x[j-1] < x[j]) {
				temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}
		}
		ShowData(x, DATA_SIZE);
	}
}


int main() {

	int num[] = {3, 7, 1, 5, 4, 2, 6, 0};

	BubbleSort(num, DATA_SIZE);

	return 0;
}
