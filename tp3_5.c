#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LONGITUD 50

int main()
{
    char **nombres;
    char *buff;
    int cantidadNombres;

    buff =(char *)malloc(MAX_LONGITUD*sizeof(char));
    printf("Ingresar la cantidad de nombres: ");
    scanf("%d",&cantidadNombres);
    fflush(stdin);
    nombres=(char**)malloc(cantidadNombres*sizeof(char *));

    for (int i = 0; i < cantidadNombres; i++)
    {
        printf("\n Ingresar Nombre [%d]: ",i+1);
        gets(buff);
        nombres[i]=(char*)malloc(strlen(buff)*sizeof(char));
        strcpy(nombres[i],buff);
    }
    
    for (int j = 0; j < cantidadNombres; j++)
    {
        printf("\nEl nombre [%d] es ",j+1);
        puts(nombres[j]);
    }

        free(buff);
        free(nombres);

    return 0;
}










/* int main() {
    int cantidad_nombres;
    char **nombres;

    printf("Ingrese la cantidad de nombres que desea ingresar: ");
    scanf("%d", &cantidad_nombres);

    nombres = (char **) malloc(cantidad_nombres * sizeof(char *));

    for (int i = 0; i < cantidad_nombres; i++) {
        nombres[i] = (char *) malloc(MAX_LONGITUD * sizeof(char));
        printf("Ingrese el nombre %d: ", i + 1);
        scanf("%s", nombres[i]);
    }

    printf("\nLos nombres ingresados son:\n");

    for (int i = 0; i < cantidad_nombres; i++) {
        printf("%s\n", nombres[i]);
    }

    for (int i = 0; i < cantidad_nombres; i++) {
        free(nombres[i]);
    }

    free(nombres);

    return 0;
} */
