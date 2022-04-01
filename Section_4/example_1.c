#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    unsigned int students = 25;
    long long unsigned int worldPopulation = 7801235945U;

    printf("%12u | Students in Class\n", students);
    printf("%12llu | World population now\n", worldPopulation);

    uint8_t count = UINT8_MAX;
    printf("%12u | Count of something\n", count);

    count += 1;
    printf("%12u | Count OVERFLOW\n", count);

    printf("%12d | INT32_MIN\n", INT32_MIN);
    printf("%12d | INT32_MAX\n", INT32_MAX);
    printf("%12u | UINT32_MAX\n", UINT32_MAX);

    return EXIT_SUCCESS;
}