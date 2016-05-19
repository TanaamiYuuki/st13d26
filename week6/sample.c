#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *in, *out;
	char ch, ch2;

	in = fopen("sample1.c", "r");
	out = fopen("sample2.c", "w");

	while((ch = fgetc(in)) != EOF) {
		printf("%c", ch);
		ch2 = ch;
		fputc(ch2, out);
	}
	printf("\n");
	fclose(in);
	fclose(out);

	return 0;
}
