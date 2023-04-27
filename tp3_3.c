/* Escriba un programa que solicite 5 nombres, los cargue en un vector de punteros char y una
vez cargados los liste por pantalla (Todo implementando reserva dinámica de memoria)
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAX 50

int main() {
    char Buff[MAX]; //variable auxiliar
    char *Nombres[5];

    
    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese sus nombres: ");
        gets(Buff);
        Nombres[i]= malloc(strlen(Buff)*sizeof(char));
        strcpy(Nombres[i],Buff);
    }
    for (int j = 0; j < 5; j++)
    {
        printf("\nNombre[%d]:%s ",j+1,Nombres[j]);
        
    }
    free(Buff);
    free(Nombres);
    
    return 0;
}
