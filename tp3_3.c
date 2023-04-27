/* Escriba un programa que solicite 5 nombres, los cargue en un vector de punteros char y una
vez cargados los liste por pantalla (Todo implementando reserva dinámica de memoria) (Lea
las notas 1 y 2)
Nota 1: La librería más común para trabajar con cadenas de caracteres es string.h .Algunas de
sus funciones más importantes son:

• strlen(<cadena>): Devuelve la longitud de la cadena sin tomar en cuenta el caracter de
final de cadena.

• strcpy(<cadena_destino>, <cadena_origen>) : Copia el contenido de
<cadena_origen> en <cadena_destino>.

• strcat(<cadena_destino>, <cadena_origen>) : Concatena el contenido de
<cadena_origen> al final de <cadena_destino>.

• strcmp(<cadena1>, <cadena2>) : Compara las dos cadenas y devuelve un 0 si las dos
cadenas son iguales, un número negativo si <cadena1> es menor que <cadena2> y un número
positivo (mayor que cero) si <cadena1> es mayor que <cadena2>

Nota 2: Cuando trabaje con cadena de caracteres ( punteros a char) tenga en cuenta que
primero tiene que hacer la reserva de memoria según la cantidad de caracteres que quiera
guardar y luego utilizando la función strcpy() para copiar el contenido. Cuando se cargue por
pantalla se puede valer de una variable auxiliar (Buff) para leer los datos y luego con ella cargar
la variable asociada

Nota 3:
Para cargar un arreglo de caracteres con una “frase” use el comando gets(<cadena>)
Tenga en cuenta que para para mostrar en pantalla un array de caracteres podemos hacerlo de
diversas maneras:

● Dentro de un bucle, desde el primer caracter (indice 0) hasta el último carácter (lo que nos
devuelve la función strlen):
for(i=0; i<strlen(cadena); i++)
printf("%c",cadena[i]);

● Utilizando el carácter de conversión %s:
printf("%s",cadena);

● Utilizando puts:
puts(cadena);
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAX 50

int main(){

    char *nombres, buff[MAX];
    


    return 0;
}