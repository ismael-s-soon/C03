#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    if (scanf("%f", &celsius) != 1) {
        return 1;
    }

    fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;

    printf("%.1f°C équivaut à %.1f°F\n", celsius, fahrenheit);

    return 0;
}
