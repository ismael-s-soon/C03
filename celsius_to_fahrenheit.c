#include <stdio.h>

int main() {
    float c;
    if (scanf("%f", &c) != 1) return 1;
    printf("%.1f°C équivaut à %.1f°F\n", c, (c * 9 / 5) + 32);
    return 0;
}
