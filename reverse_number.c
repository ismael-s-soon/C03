#include <stdio.h>
int main() {
int n, reversed = 0;
if (scanf("%d", &n) != 1) {
return 1;
}
int original = n;
if (n < 0) {
n = -n;
}
while (n != 0) {
int digit = n % 10;
reversed = reversed * 10 + digit;
n/= 10;
}
if (original < 0) {
reversed = -reversed;
}
printf("Nombre inversé : %d\n", reversed);
return 0;
}
