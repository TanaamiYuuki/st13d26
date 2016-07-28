#include <stdio.h>

#define DATASIZE 10
#define swap(type, x, y) do { type t = x; x = y; y = t; } while (0)

void quick(int a[], int left, int right) {
	int pl = left;
	int pr = right;
	int x = a[(pl+pr)/2];

	do {
		while (a[pl] < x) pl++;
		while (a[pr] > x) pr--;
		if (pl <= pr) {
			swap (int, a[pl], a[pr]);
			pl++;
			pr--;
		}
	} while (pl <= pr);

	if (left < pr) quick(a, left, pr);
	if (pl < right) quick(a, pl, right);
}

int main() {
	int i;
	int x[DATASIZE] = {9, 5, 8, 4, 2, 6, 1, 3, 9, 7};
	quick(x, 0, DATASIZE-1);
	for(i=0; i < DATASIZE; i++) {
		printf("x[%d]: %d\n", i, x[i]);
	}
	return 0;
}
