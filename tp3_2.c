/*  Una empresa necesita simular la producción de los próximos 5 años para tal fin necesita
generar una matriz (estática) de 5x12 donde cada fila corresponde a un año y cada columna
es un mes. Ud. debe realizar las siguientes tareas:
a. Cargue dicha matriz con valores aleatorios entre 10000 y 50000.
b. Muestre por pantalla los valores cargados
c. Saque el promedio de ganancia por año y muestrelos por pantalla
d. Obtenga el valor máximo y el valor mínimo obtenido informando el “año” y el “mes” de
cuándo ocurrió. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define N 5
#define M 12

int ganancia(x){
    return x/12;
}

void main(){

    int produccion[N][M];
    int anual[N], aux=0,anio, mes, max=0,mes1,anio1,min=50000;
    srand(time(NULL));
    for (int i = 0; i < N; i++) //CARGAR LA MATRIZ CON VALORES ALEATORIOS
    {
        for (int j = 0; j < M; j++)
        {      
            produccion[i][j] = 10000 + rand() % 50000;
            aux = produccion[i][j] + aux;
            if (produccion[i][j]>max)
            {
                max = produccion[i][j];
                anio=i+1;
                mes = j+1;
            }else if (produccion[i][j]<min)
            {
                min = produccion[i][j];
                anio1=i+1;
                mes1 = j+1;
            }
            printf("-%d-",produccion[i][j]); //MOSTRAR LOS VALORES CARGADOS
        }
        anual[i]=ganancia(aux);
        printf("\n");
        aux = 0;
    }
    
    for (int z = 0; z < N; z++)
    {
       printf("\nLa ganancia en el mes [%d] es %d",z+1,anual[z]);
    }
    
    printf("\nEl valor maximo obtenido fue %d en el anioo %d y mes %d",max,anio,mes);
    printf("\nEl valor minimo obtenido fue %d en el anio %d y mes %d",min,anio1,mes1);



}