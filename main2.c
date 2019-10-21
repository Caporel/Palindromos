/* 
 * File:   main2.c
 * Author: Grupo 3
 *
 * Created on October 20, 2019, 11:12 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include"palin.h"

/*
 * 
 */

int main(void)
{
    char frase[MAX];                                        //Define arreglo de chars para guardar frase.
    
    char *pi,*pf;                                           //Declara puntero inicial al comienzo del arreglo. Tambien uno al final de la frase.
    
    printf("Ingrese su frase(menor a 100 caracteres):");
    
    if(initpal(frase)!=NO_ERROR)
    {
        printf("\nDemasiadas letras bro, no llegamos a tanto te dijimos\n");
    }
    
    printf("\n");
    
    pi=frase;                                               //Pone al puntero inicial apuntando al incio de la frase.
    for (pf=pi; *pf!=TERMI;pf++);                           //Pone al puntero final apuntando al terminador
    
    fpali(pi,pf);                                           //Invoca función recursiva.
    
    
    return 0;
}