#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    /* Integers

    - No fractional component
    - Positive, negative, zero
    - Discrete values */

    // 1234 = 1*10^3 + 2*10^2 + 3*10^1 + 4*10^0 = 1*1000 + 2*100 + 3*10 + 4*1

    /*
    Types:
    short int: 2 bytes
    int: min. 2 bytes, usually 4 bytes
    long int: min. 4 bytes, usually 8 bytes
    long long int: min. 8 bytes
    */
    int status = -1;
    printf("status value:\n");
    printf("%6d\n", status);
    printf("123456\n");

    unsigned students = 25U;
    unsigned long long worldPopulation = 7801235945ULL;

    printf("%12u | Students in the class\n", students);
    printf("%12llu | World population now\n", worldPopulation);

    uint8_t count = UINT8_MAX;
    printf("%12u | Count\n", count);

    count = count + 1;
    printf("%12u | Count + 1 (overflows)\n", count);

    printf("%12d | INT32_MIN\n", INT32_MIN);
    printf("%12d | INT32_MAX\n", INT32_MAX);
    printf("%12u | UINT32_MAX\n", UINT32_MAX);

    /* Real Numbers

    - Positive, negative, zero
    - Continuous values
    - Decimal representation*/

    // 0.1234 = 1.234 * 10^-1 = 1.234 / 10^1 = 1.234 / 10 = 0.1234

    /* Binary

    - Only two symbols: 0 and 1 */

    // 0b1011 = 1*2^3 + 0*2^2 + 1*2^1 + 1*2^0 = 1*8 + 0*4 + 1*2 + 1*1 = 8 + 0 + 2 + 1 = 11

    // TWO'S COMPLEMENT
    // 0b01111111 = 127    <-- The most left bit is 0, so it's a positive number
    // 0b10000000 = -128   <-- The most left bit is 1, so it's a negative number
    // 0b11111111 = -1

    // binary32 = single precision floating point number
    // 24 Significant bits + 7 Decimal digits + 8 Exponent bits = max. 10^38

    // binary64 = double precision floating point number
    // 53 Significant bits + 16 Decimal digits + 11 Exponent bits = max. 10^308

    /* 1.23456789 */
    double decimalDigits = 1.23456789;

    /*7.801 x 10^9 */
    double worldPopulationReal = 7.801E9;

    /* 6.626 x 10^-34 */
    double planckConstant = 6.626E-34;

    printf("%12.1f | 1 deciaml digit\n", decimalDigits);
    printf("%12.3f | 3 decimal digits\n", decimalDigits);
    printf("%12.1f | world population, decimal, 1 digit of precision\n", worldPopulationReal);
    printf("%12.1e | world population, scientific, 1 digit of precision\n", worldPopulationReal);
    printf("%12.3e | world population, scientific, 1 digit of precision\n", worldPopulationReal);
    printf("%12.1E | Planck constant, scientific, 1 digit of precision\n", planckConstant);
    printf("%12.3E | Planck constant, scientific, 3 digits of precision\n", planckConstant);

    return 0;
}