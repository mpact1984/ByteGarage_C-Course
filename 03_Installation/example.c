#include <stdio.h>
#include <stdlib.h>

int main()
{
    int apples = 12;
    int bananas = 9;
    int students = apples + bananas;

    printf("In the class are %d apples and %d bananas.\n", apples, bananas);
    printf("In total there are %d students in the class.\n", students);

    return EXIT_SUCCESS;
}