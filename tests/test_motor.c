#include <assert.h>

int compute_rpm(int voltage);

int main() {
    assert(compute_rpm(0) == 0);
    assert(compute_rpm(5) == 500);
    assert(compute_rpm(12) == 1200);
    return 0;
}