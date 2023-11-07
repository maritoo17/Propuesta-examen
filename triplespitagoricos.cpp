#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Ingrese un número entero n: ");
    scanf("%d", &n);

    printf("Triples Pitagóricos:\n");
    for (int a = 1; a <= n; a++) {
        for (int b = a; b <= n; b++) {
            int c = sqrt(a * a + b * b);
            if (c <= n && c * c == a * a + b * b) {
                printf("(%d, %d, %d)\n", a, b, c);
            }
        }
    }

    return 0;
}

