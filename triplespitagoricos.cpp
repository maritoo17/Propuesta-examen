#include <cstdio>
#include <cmath>

int esTriplePitagorico(int a, int b, int c) {
    return (a * a + b * b == c * c);
}

int esTriangulo(int a, int b, int c) {
    return (a + b > c && a + c > b && b + c > a);
}

int main() {
    int valores[2];

    for (int i = 0; i < 2; i++) {
        printf("Ingrese el valor del lado %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    int a = valores[0];
    int b = valores[1];
    double c = -sqrt(a * a + b * b);

    printf("El tercer lado (negativo) es: %.2lf\n", c);

    if (esTriplePitagorico(a, b, c) && esTriangulo(a, b, c)) {
        printf("Es un triple pitagórico y forma un triángulo válido.\n");
    } else {
        printf("No es un triple pitagórico y no forma un triángulo válido.\n");
    }

    return 0;
}
