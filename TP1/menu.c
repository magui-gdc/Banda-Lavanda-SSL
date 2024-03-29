#include <stdio.h>
#include <ctype.h>
#include "funciones.c"

int main() {

    int opcion;
    char cadena[100];
    char cadena2[100];
    char cadena3[200];
    char caracter;
    int posicion;

    menu:
    printf("\n\n\n INGRESAR OPCION: \n");
    printf("\n 1. Calcular longitud.");
    printf("\n 2. Calcular equivalente numerico.");
    printf("\n 3. Conviertir a mayusculas.");
    printf("\n 4. Eliminar caracter dado.");
    printf("\n 5. Concatenar dos cadenas.");
    printf("\n 6. Modificar la cadena con la insercion de un caracter en una posicion determinada. ");
    printf("\n 7. Salir del programa. \n\n\n");

    scanf("%d", &opcion);

    while (opcion<=0 || opcion>=8)
    {
        printf("\nPUSISTE MAL LA OPCION IDIOTA");
        goto menu;
    }
    

    switch (opcion)
    {
    case 1:
        printf("\nCALCULO DE LONGITUD\nIngrese cadena:\n");
        scanf("%s", cadena);
        printf("El largo es: \n");
        printf("%d", largo(cadena));
        goto menu;
    
    case 2:
        printf("\nCALCULO DE EQUIVALENTE NUMERICA\nIngrese cadena:");
        scanf(" %s", cadena);
        printf("%d", stringAInt(cadena));
        goto menu;

    case 3:
        printf("\nCONVERTIR A MAYUSCULAS\nIngrese cadena:");
        scanf(" %s", cadena);
        convertirCadenaMayusculas(cadena);
        printf("La cadena en mayusculas es: %s",cadena);
        goto menu;

    case 4:
        printf("\nELIMINAR EL CARACTER DADO\nIngrese cadena:");
        scanf(" %s", cadena);
        printf("\nIngrese caracter a eliminar:");
        scanf(" %c", &caracter);
        eliminarCaracter(cadena, caracter);
        printf("La cadena con el caracter %c eliminado seria: %s",caracter,cadena);
        goto menu;

    case 5:      
        printf("\nCONCATENAR DOS CADENAS\nIngrese primera cadena:");
        scanf(" %s", cadena);
        printf("\nIngrese segunda cadena:");
        scanf(" %s", cadena2);
        concatenarCadenas(cadena,cadena2,cadena3);
        printf("La cadena %s y %s concatenadas serian: %s",cadena,cadena2,cadena3);
        goto menu;     

    case 6:
        printf("\nMODIFICAR CADENA\nIngrese cadena:");
        scanf(" %s", cadena);
        printf("\nIngrese caracter a agregar:");
        scanf(" %c", &caracter);
        printf("\nIngrese posicion a agregar caracter:");
        scanf(" %d", &posicion);
        agregarCaracter(cadena, caracter, posicion,cadena3);
        printf("La cadena con el caracter %c agregado en %d seria: %s",caracter,posicion,cadena3);
        goto menu;

    case 7:
        return 0;
    }

}