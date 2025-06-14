#include <stdio.h>

int compute_rpm(int voltage) {
    return voltage * 100;
}

int main() {
    int rpm = compute_rpm(12);
    printf("RPM: %d\n", rpm);
    return 0;
}
