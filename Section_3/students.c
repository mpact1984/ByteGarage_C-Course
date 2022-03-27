#include <stdio.h>
#include <stdlib.h>

int main()
{
    int apples = 12;
    int bananas = 9;
    int students = apples + bananas;

    printf("There are %d apples and %d bananas in the classroom.\nIn total there are %d students in this classroom.", apples, bananas, students);

    return EXIT_SUCCESS;
}