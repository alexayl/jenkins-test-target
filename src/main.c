#include "motor.h"
#include <stdio.h>

int main() {
    int rpm = compute_rpm(12);
    printf("RPM: %d\n", rpm);
    return 0;
}