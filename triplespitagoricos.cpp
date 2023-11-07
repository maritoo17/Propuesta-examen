#include <cstdio>

int esTriplePitagorico(int a, int b, int c) {
    return (a * a + b * b == c * c);
}

int esTriangulo(int a, int b, int c) {
    return (a + b > c && a + c > b && b + c > a);
}

int main() {
    int valores[3];

    for (int i = 0; i < 3; i++) {
        printf("Ingrese el valor del lado %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    int es_pitagorico = 0;
    int es_valido = 0;

    for (int i = 0; i < 3; i++) {
        int a = valores[i];
        int b = valores[(i + 1) % 3];
        int c = valores[(i + 2) % 3];

        if (esTriplePitagorico(a, b, c)) {
            es_pitagorico = 1;
            if (esTriangulo(a, b, c)) {
                es_valido = 1;
                break;
            }
        }
    }

    if (es_pitagorico) {
        if (es_valido) {
            printf("Es un triple pitagórico y forma un triángulo válido.\n");
        } else {
            printf("Es un triple pitagórico, pero no forma triángulo.\n");
        }
    } else {
        printf("No es un triple pitagórico y no forma un triángulo válido.\n");
    }

    return 0;
}
