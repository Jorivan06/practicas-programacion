#include <stdio.h>

// Prototipos de funciones
void suma(int cantidad);
void resta(int cantidad);
void multiplicacion(int cantidad);
void division(int cantidad);
void resultados();
void menu();

// Variable global
float resultado;

int main() {
    menu();
    return 0;
}

void suma(int cantidad) {
    float numero;
    resultado = 0;
    for (int i = 0; i < cantidad; i++) {
        printf("Ingrese el numero %d: ", i + 1);
        if (scanf("%f", &numero) != 1) {
            printf("Entrada invalida. Por favor, ingrese un numero decimal.\n");
            while (getchar() != '\n');
            i--;
            continue;
        }
        resultado += numero;
    }
}

void resta(int cantidad) {
    float numero;
    resultado = 0;

    for (int i = 0; i < cantidad; i++) {
        printf("Ingrese el numero %d: ", i + 1);
        if (scanf("%f", &numero) != 1) {
            printf("Entrada invalida. Por favor, ingrese un numero decimal.\n");
            while (getchar() != '\n');
            i--;
            continue;
        }

        if (i == 0)
            resultado = numero;
        else
            resultado -= numero;
    }
}

void multiplicacion(int cantidad) {
    float numero;
    resultado = 1;

    for (int i = 0; i < cantidad; i++) {
        printf("Ingrese el numero %d: ", i + 1);
        if (scanf("%f", &numero) != 1) {
            printf("Entrada invalida. Por favor, ingrese un numero decimal.\n");
            while (getchar() != '\n');
            i--;
            continue;
        }
        resultado *= numero;
    }
}

void division(int cantidad) {
    float numero;
    resultado = 0;

    for (int i = 0; i < cantidad; i++) {
        printf("Ingrese el numero %d: ", i + 1);
        if (scanf("%f", &numero) != 1) {
            printf("Entrada invalida. Por favor, ingrese un numero decimal.\n");
            while (getchar() != '\n');
            i--;
            continue;
        }

        if (i == 0)
            resultado = numero;
        else if (numero != 0)
            resultado /= numero;
        else {
            printf("Error: Division por cero. Operación indefinida.\n");
            resultado = 0;
            return;
        }
    }
}

void resultados() {
    printf("\n\033[1;32mResultado de la operacion: %.4f\n\033[0m", resultado);
}

void menu() {
    int opcion, cantidad;

    do {
        printf("\n\033[1;34m--- Menu de Operaciones Basicas ---\033[0m\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicacion\n");
        printf("4. Division\n");
        printf("5. Salir\n");
        printf("Seleccione una opcion: ");

        if (scanf("%d", &opcion) != 1) {
            printf("Entrada invalida. Ingrese un numero.\n");
            while (getchar() != '\n');
            continue;
        }

        if (opcion >= 1 && opcion <= 4) {
            printf("¿Cuantos numeros desea ingresar?: ");
            if (scanf("%d", &cantidad) != 1 || cantidad < 2) {
                printf("Entrada invalida. Debe ingresar al menos 2 numeros.\n");
                while (getchar() != '\n');
                continue;
            }
        }

        switch (opcion) {
            case 1:
                suma(cantidad);
                resultados();
                break;
            case 2:
                resta(cantidad);
                resultados();
                break;
            case 3:
                multiplicacion(cantidad);
                resultados();
                break;
            case 4:
                division(cantidad);
                resultados();
                break;
            case 5:
                printf("\nGracias por usar el programa. ¡Hasta luego!\n");
                break;
            default:
                printf("Opcion invalida. Intente de nuevo.\n");
                break;
        }
    } while (opcion != 5);
}

