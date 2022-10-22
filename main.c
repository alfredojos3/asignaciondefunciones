#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {

    int opc = 0, num1 = 0, num2 = 0;

    do {
        system("clear");
        printf("MENU DE OPCIONES\n\n");
        printf("1. Ingrese los valores\n");
        printf("2. Sumar\n");
        printf("3. Restar\n");
        printf("4. Multiplicar\n");
        printf("5. Dividir\n");
        printf("6. Salir\n\n");
        printf("Opcion a escoger: ");
        scanf("%d", &opc);

        switch(opc) {
            case 1:
                system("clear");
                printf("Ingrese el primer valor: ");
                scanf("%d", &num1);
                printf("Ingrese el segundo valor: ");
                scanf("%d", &num2);
                break;
            case 2:
                printf("\nLa suma de %d + %d es: %d\n\n", num1, num2, num1+num2);
                sleep(2);
                break;
            case 3:
                printf("\nLa resta de %d - %d es: %d\n\n",num1,num2,num1-num2);
                sleep(2);
                break;
            case 4:
                printf("\nLa multiplicacion de %d * %d es: %d\n\n",num1,num2,num1*num2);
                sleep(2);
                break;
            case 5:
                printf("\nLa division de %d / %d es: %d\n\n",num1,num2,num1/num2);
                sleep(2);
                break;
            case 6:
                break;
            default:
                printf("La opcion que ingreso es incorrecta \n");
                sleep(1);
                break;
        }
    } while(opc != 6);
    return 0;
}
