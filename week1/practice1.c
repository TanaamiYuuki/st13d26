#include <stdio.h>

int array[7] = {5, 3, 2, 7, 8, 4, 1};

int main(void)
{
    int i, total;
    for(i = 0; i < 7; i++){
        total += array[i];
    }
    printf("%d\n", total);
    return 0;
}
