

/*************** Operaciones Básicas *************/

#include <stdio.h>

float resultado; //Variable global dentro del codigo
//funcion void//
void suma();
void resta();
void multiplicacion();
void division();

 main() {
    int opcion;
    
    do {
        puts(" \t***************** Menu de Operaciones *************** \n\n");
        printf(" 1- Suma\n 2- Resta\n 3- Multiplicacion\n 4- Division\n 5- Salir\n\n");
        puts("Seleccione una opcion");
        scanf("%d", &opcion);
        
        switch(opcion) {
            case 1:
                suma();
                break;
            case 2:
                resta();
                break;
            case 3:
                multiplicacion();
                break;
            case 4:
                division();
                break;
            case 5:
            	Sleep(1500);
                printf("Saliendo del programa...\n");
                Sleep(1300);
                printf("No cierre la pestaña aun...\n");
                Sleep(1500);
				system("pause");
				break;
            default:
                printf("Opcion no valida, intente de nuevo.\n");
        }
    } while(opcion != 5);
    
    return 0;
}

void suma() {
    int n, i;
    float num;
    resultado = 0;
    
    printf("Ingrese cuantos numeros va a sumar: ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        printf("Ingrese un numero: ");
        scanf("%f", &num);
        resultado += num;
    }
    
    printf("La suma es: %.2f\n", resultado);
}

void resta() {
    int n, i;
    float num;
    
    printf("Ingrese cuantos numeros desea restar: ");
    scanf("%d", &n);
    
    printf("Ingrese el primer numero: ");
    scanf("%f", &resultado);
    
    for(i = 1; i < n; i++) {
        printf("Ingrese un numero: ");
        scanf("%f", &num);
        resultado -= num;
    }
    
    printf("La resta es: %.2f\n", resultado);
}

void multiplicacion() {
    int n, i;
    float num;
    resultado = 1;
    
    printf("Ingrese cuantos numeros quiere multiplicar: ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        printf("Ingrese un numero: ");
        scanf("%f", &num);
        resultado *= num;
    }
    
    printf("El producto es: %.2f\n", resultado);
}

void division() {
    int n, i;
    float num;
    
    printf("Ingrese cuantos numeros quiere dividir: ");
    scanf("%d", &n);
    
    printf("Ingrese el primer numero el cual sera el dividendo: ");
    scanf("%f", &resultado);
    
    for(i = 1; i < n; i++) {
        printf("Ingrese un numero el cual sera el divisor: ");
        scanf("%f", &num);
        
        if(num == 0) {
            printf("Error: operacion no definida.\n");
            return;
        }
        
        resultado /= num;
    }
    
    printf("El resultado de la division es: %.3f\n", resultado);
}

