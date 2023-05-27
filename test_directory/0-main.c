#include "main.h"
#include <stdio.h>

int main(void)
{
    int sum;

    sum = _printf("Hello, %s! Today is %c.\n", "Eyram", 'A');
    printf("Number of characters printed: %d\n", sum);

    return (0);
}
