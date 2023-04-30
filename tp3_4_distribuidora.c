#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int costoTotal(int x, float y){
    return x*y;
};


struct {
    int ProductoID; //Numerado en ciclo iterativo
    int Cantidad; // entre 1 y 10
    char *TipoProducto; // Algún valor del arreglo TiposProductos
    float PrecioUnitario; // entre 10 - 100 
}typedef Producto;

struct{
    int ClienteID; // Numerado en el ciclo iterativo
    char *NombreCliente; // Ingresado por usuario
    int CantidadProductosAPedir; // (aleatorio entre 1 y 5)
    Producto *Productos; //El tamaño de este arreglo depende de la variable
}typedef Cliente;

int main(){
    char *TiposProductos[]={"Galletas","Snack","Cigarrillos","Caramelos","Bebidas"};
    int clientes;
    float total;
    srand(time(NULL));
    
        printf("\nIngrese la cantidad de clientes: ");
        scanf("%d",&clientes);
        fflush(stdin);
        Cliente *Nuevo;

        Nuevo = malloc(sizeof(Cliente)*clientes);

        for (int i = 0; i < clientes; i++)
        {
            Nuevo[i].ClienteID=i+1;
            printf("\nIngresar Nombre del cliente: ");
            Nuevo[i].NombreCliente=malloc(sizeof(char)*100);
            //scanf("%s",&Nuevo[i].NombreCliente);
            gets(Nuevo[i].NombreCliente);
            fflush(stdin);
            Nuevo[i].CantidadProductosAPedir=1+rand()%5;
            Nuevo[i].Productos=malloc(sizeof(Producto)*Nuevo[i].CantidadProductosAPedir);
            for (int j = 0; j < Nuevo[i].CantidadProductosAPedir; j++)
            {
                Nuevo[i].Productos[j].ProductoID=1000+1;
                Nuevo[i].Productos[j].PrecioUnitario=10+rand()%100;
                Nuevo[i].Productos[j].Cantidad=1+rand()%10;
                Nuevo[i].Productos[j].TipoProducto=TiposProductos[rand()%5];
            }
            
        }

        for (int i = 0; i < clientes ; i++)
        {
            printf("\n---------El ID es %d----------",Nuevo[i].ClienteID);
            printf("\nNOMBRE: %s",Nuevo[i].NombreCliente);
            printf("\nCantidad de productos que lleva:  %d",Nuevo[i].CantidadProductosAPedir );
            for (int j = 0; j < Nuevo[i].CantidadProductosAPedir; j++)
            {
            printf("\n-------PRODUCTOS A LLEVAR------");
            printf("\nEl ID es: %d",Nuevo[i].Productos[j].ProductoID);
            printf("\nEl producto es: ");
            puts(Nuevo[i].Productos[j].TipoProducto);
            printf("\nEl precio del producto es: %.2f",Nuevo[i].Productos[j].PrecioUnitario);
            printf("\nLa cantidad de producto es: %d",Nuevo[i].Productos[j].Cantidad);
            total=costoTotal(Nuevo[i].Productos[j].Cantidad,Nuevo[i].Productos[j].PrecioUnitario);
            printf("\nEl total gastado en el producto es: %.2f",total);
            printf("\n-------FIN DEL PRODUCTO %d-------",j+1);
            }
            

        }
        
    return 0;
}