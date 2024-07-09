int main() {
    int edad;

       printf("Ingrese la edad: ");
    scanf("%d", &edad);
        if (edad >= 18) {
        printf("La persona es mayor de edad.\n");
    } else {
        printf("La persona es menor de edad.\n");
    }

    return 0;
}

int main() {
    int calificacion;

    printf("Ingrese la calificación: ");
    scanf("%d", &calificacion);

    if (calificacion >= 90 && calificacion <= 100) {
        printf("Calificación: A\n");
    } else if (calificacion >= 80 && calificacion <= 89) {
        printf("Calificación: B\n");
    } else if (calificacion >= 70 && calificacion <= 79) {
        printf("Calificación: C\n");
    } else if (calificacion >= 60 && calificacion <= 69) {
        printf("Calificación: D\n");
    } else if (calificacion >= 0 && calificacion <= 59) {
        printf("Calificación: F\n");
    } else {
        printf("Calificación inválida.\n");
    }

    return 0;
}
