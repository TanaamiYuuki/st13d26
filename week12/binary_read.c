#include <stdio.h>

int main(void)
{
	int i, data_size = 0;
	int a[50000];
	FILE *fp;

	fp = fopen("sample4binary.txt", "r");
	if(fp == NULL) {
		printf("File is not opened. \n");
		return 0;
	}

	while ( ! feof(fp) && data_size < 50000) {
		fscanf(fp, "%d", &(a[data_size]));
		data_size++;
	}
	fclose(fp);
	data_size = data_size-1;

	int key = 39;
	int left = 0;
	int right = data_size;
		printf("%d  ", right);
	int center;

	do {
		int center = (left + right) / 2;
		if (a[center] == key) {
			printf("a[%d]が%dでした。", center, key); return 0;
		} else if (a[center] < key) {
			left = center + 1;
		} else {
			right = center -1;
		}
	} while (left <= right);
		printf("見つかりませんでした。");
	return 0;
}
