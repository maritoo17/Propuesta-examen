#include <stdio.h>

int esTriplePitagorico(int a, int b, int c) {
    return (a * a + b * b == c * c);
}

int esTriangulo(int a, int b, int c) {
    return (a + b > c && a + c > b && b + c > a);
}

int main() {
    int a, b, c;

    printf("Ingrese el valor de a: ");
    scanf("%d", &a);
    printf("Ingrese el valor de b: ");
    scanf("%d", &b);
    printf("Ingrese el valor de c: ");
    scanf("%d", &c);

    if (esTriplePitagorico(a, b, c)) {
        if (esTriangulo(a, b, c)) {
            printf("(%d, %d, %d) es un triple pitagórico y forma un triángulo válido.\n", a, b, c);
        } else {
            printf("(%d, %d, %d) es un triple pitagórico, pero no forma un triángulo válido.\n", a, b, c);
        }
    } else {
        printf("(%d, %d, %d) no es un triple pitagórico y/o no forma un triángulo válido.\n", a, b, c);
    }

    return 0;
}

