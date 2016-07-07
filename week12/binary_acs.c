#include <stdio.h>

int main(void)
{
	int a[] = {95, 70, 68, 58, 39, 31, 29, 28, 15, 7, 5};
	int key = 39;
	int left = 0;
	int right = sizeof(a)/sizeof(int) - 1;
		printf("%d ", right);
	int center;

do {
	center = (left + right) / 2;
	if (a[center] == key) {
		printf("a[%d]が%dでした。", center, key); return 0;
	} else if (a[center] < key) {
		right = center - 1;
	} else {
		left = center + 1;
		}
	} while (left <= right);
		printf("見つかりませんでした。");
	return 0;
}
