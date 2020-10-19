#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 50
#define TAM_E 8

float descuento(float precio);

int buscarCaracter(char cadena[], char letra, int tam);

//void ordenar(eNotebook lista[], int tam);

int main()
{
    // PRIMER FUNCION
    float precio;
    float precioFinal;

    printf("Ingrese precio: ");
    scanf("%f", &precio);

    precioFinal = descuento(precio);

    printf("El precio final es: %.2f", precioFinal);

    printf("\n\n\n");

    // SEGUNDA FUNCION
    char cadena[TAM];
    char letra;
    int cont;

    printf("Ingrese la cadena (50 caracteres max): ");
    fflush(stdin);
    gets(cadena);

    while(strlen(cadena)> 50)
    {
        printf("Demasiado largo, reingrese la cadena (50 caracteres max): ");
        fflush(stdin);
        gets(cadena);
    }

    printf("Ingrese el caracter a contar: ");
    fflush(stdin);
    scanf("%c", &letra);

    cont = buscarCaracter(cadena, letra, TAM);
    printf("La letra elegida se encontro %d veces.", cont);

    printf("\n\n\n");


    //TERCERA FUNCION
/*
    typedef struct
    {
        int id;
        char procesador[20];
        char marca[20];
        float precio;
    }eNotebook;

    eNotebook lista[TAM_E] = {
        {100, "procesador3", "intel", 500},
        {101, "procesador4", "amd", 600},
        {102, "procesador3", "prueba", 500},
        {103, "procesador1", "amd", 400},
        {104, "procesador2", "amd", 350},
        {105, "procesador4", "prueba", 400},
        {106, "procesador2", "intel", 550},
        {107, "procesador1", "intel", 300} };

        ordenar(lista, TAM_E);

        for(int i = 0; i < TAM_E; i++)
        {
            printf("%d   ")
        }
*/
    return 0;
}


float descuento(float precio)
{
    float descuento;
    float rta;

    descuento = (precio*5) / 100;

    rta = precio - descuento;

    return rta;
}


int buscarCaracter(char cadena[], char letra, int tam)
{
    int cont = 0;

    for(int i = 0; i < tam; i++)
    {
        if(letra == cadena[i])
        {
            cont++;
        }
    }

    return cont;
}

/*
void ordenar(eNotebook lista[], int tam)
{
    eNotebook aux;

    for(int i = 0; i < tam-1; i++)
    {
        for(int j = i+1; j < tam; j++)
        {
            if(strcmp(lista[i].marca, lista[j].marca) > 0)
            {
                aux = lista[i];
                lista[i] = lista[j];
                lista[j] = aux;
            }
        }
    }
}
*/
