#include <stdio.h>
#include <stdlib.h>
#include"palin.h"

int initpal(char * frase)              //Función que recibe lo ingresado por el usuario y lo guarda en un arreglo.
{
    char c;                             //Declara variable para guardar caracteres ingresados.
    int cant=0;                         //Declara variable que cuenta la cantidad de números ingresados. 
    
    while(((c=getchar())!='\n')&&(cant<MAX))          //Si no es enter, sigue.
    {
        *frase=c;                       //Guarda el caracter en el arreglo.
        frase++;                        //Avanza al siguiente caracter en el arreglo.
        cant++;
    }
    
    if((cant==MAX)&&(c!='\n'))          //Si se superó el máximo 
    {
        return !NO_ERROR;               //Enviará error.
    }
    
    *frase=TERMI;                       //Terminó entonces agrega un terminador.
    
    return NO_ERROR;                    //No enviará error.
}
