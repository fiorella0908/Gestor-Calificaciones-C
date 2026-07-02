#include <stdio.h>

int main() {
    int num_estudiantes;
    float suma = 0.0;
    float promedio;

    printf("--- Gestor de Calificaciones y Promedios ---\n");
    
    printf("Ingrese la cantidad de estudiantes en el grupo: ");
    scanf("%d", &num_estudiantes);

    if (num_estudiantes <= 0) {
        printf("Error: El numero de estudiantes debe ser mayor a 0.\n");
        return 1;
    }

    float notas[num_estudiantes]; 

    for (int i = 0; i < num_estudiantes; i++) {
        float nota_actual;
        
        do {
            printf("Ingrese la nota del estudiante %d (1 al 20): ", i + 1);
            scanf("%f", &nota_actual);

            if (nota_actual < 1.0 || nota_actual > 20.0) {
                printf("Error: La calificacion debe estar en el rango de 1 a 20. Intente nuevamente.\n");
            }
        } while (nota_actual < 1.0 || nota_actual > 20.0);

        notas[i] = nota_actual;
        suma += nota_actual;
    }

    promedio = suma / num_estudiantes;

    printf("\n--- Resultados Finales ---\n");
    printf("Total de estudiantes: %d\n", num_estudiantes);
    printf("Promedio general del grupo: %.2f / 20.00\n", promedio);

    return 0;
}
