#include <stdio.h>
int fibo_recursive(int x) {
	int a = 0, b = 1, c, i;
	printf("%d %d ", a, b);
	for(i = 0; i < 10; ++ i){
		printf("%d ", c = a + b);
		a = b;
		b = c;
	}
	printf("\n");
	return 0;
}
int main(void) {
	fibo_recursive(10);
}
