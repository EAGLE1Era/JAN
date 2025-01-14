#include <stdio.h>

int a(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (m > 0 && n == 0) {
        return a(m - 1, 1);
    } else {
        return a(m - 1, a(m, n - 1));
    }
}

int main() {
    int m, n;
    printf("Enter values for m and n: ");
    scanf("%d %d", &m, &n);
    printf("Ackermann(%d, %d) = %d\n", m, n, a(m, n));
}
