#include <stdio.h>
#include <math.h>



int main() {
    float U1 = 120, U2 = 63.5f, U3 =45,  b = 1.86, R1 = 15, R2 = 8.75, R3 = 4.8;

    float R = (R1 * R2) / (R1 + R2);
    printf("\nR=%f", R);

    float U = (1/sqrt(b)) / (U1 + U2);
    printf("\nU=%f", U);

    float i = (U + U2) / (R + R3);
    printf("\ni=%f", i);
}
