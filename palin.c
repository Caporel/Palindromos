#include <stdio.h>
#include <stdlib.h>
#include"palin.h"


void fpali (char* in, char* fin)                                            /*La función fpali analiza si una frase es un palíndromo o no.
                                                                            *Trabaja con dos punteros a char que apuntan el inicio de la cadena y final.
                                                                            *La misma evade signos de puntuación, algunos caracteres como el '&' y espacios.
                                                                            *Es una función recursiva que tiene dos opciones de base. Si ambos punteros apuntan al terminador
                                                                            *significa que es una frase sin letras. Si ambos tienen la misma dirección, entonces han llegado
                                                                            *a la mitad de la frase sin problemas, indicando que es un arreglo palíndromo.
                                                                            *En cuanto a la recursividad, si la función encontró dos letras iguales(sin importar si una es 
                                                                            *mayúscula y la otra minúscula) se vuelve a llamar pero esta vez avanzando el puntero del inicio un 
                                                                            *caracter y retrocediendo un lugar el puntero del final.Luego cada uno de estos salteará los signos
                                                                            *o espacios correspondientes para locarse en una nueva letra y comenzar nuevamente el ciclo.
                                                                            No devuelve nada, sino que imprime en pantalla si es palíndromo, si no lo es o si hay algún error.*/
{
    while ((((*in<'A')||((*in>'Z')&&(*in<'a'))||(*in>'z'))&&(*in!=TERMI))&&(in!=fin))                           //Si NO es una letra a lo que apunta el puntero inicial ni tampoco apunta al terminador ni es igual al final, entonces
    {                                                                                                           
        if((*in==' ')||(*in=='"')||((*in>='&')&&(*in<='.')&&(*in!='+')&&(*in!='*'))||(*in==':')||(*in==';'))    //Si es un signo válido, avanza al siguiente.
            in++;
           
        else
        {
            printf("Tu frase tiene un caracter invalido: %c\n",*in);                                            //Sino, indica el caracter inválido.
            return;
        }
    }      
        
    while ((((*fin<'A')||((*fin>'Z')&&(*fin<'a'))||(*fin>'z'))&&(*in!=TERMI))&&(in!=fin))                       //Si NO es una letra a lo que apunta el puntero final ni el inicial apunta al terminador ni es igual al incial, entonces
    {
        if((*fin==' ')||(*fin=='"')||((*fin>='&')&&(*fin<='.')&&(*fin!='+')&&(*fin!='*'))||(*fin==':')||(*fin==';')||(*fin==TERMI))     //Si es un signo válido, avanza al siguiente.
            fin--;
           
        else
        {
            printf("Tu frase tiene un caracter invalido: %c\n",*fin);                                           //Sino, indica el caracter inválido.
            return;
        }
    }
        
    if ((in==fin)&&(*in==TERMI))                                                                                  //BASE 0: si el inicial y el final son el mismo, pero apuntan al terminador.
    {
        printf("Ingresa al menos una letra\n");                                                                 //Entonces indica que la frase no posee ninguna letra para analizar.
        return;
    }
    
    else if (in==fin)                                                                                           //BASE 1: si el inicial y el final son el mismo, entonces se encontraron, es decir
    {                                                                                                           //todas las anteriores fueron válidas, ES PALÍNDROMO.
        printf("WOW, es palinosecuanto\n");                                                                     //Imprime en pantalla que es palíndromo.
        return;
    }
    
    else                                                                                                        //RECURSIVIDAD.
    {
        if((*in==*fin)||((*in+MAYUMINU)==(*fin))||((*in)==(*fin+MAYUMINU)))                                     //Si el caracter que apuntan ambos punteros es el mismo o tienen una diferencia de
        {                                                                                                       //mayúsculas y minúsculas (calculos con MAYUMINU)
            fpali(in+NEXT,fin-NEXT);                                                                            //Entonces se llama a sí misma con los punteros apuntando al siguiente caracter.
            return;
        }
        
        else
        {
            printf("Sorry, no es palinosecuanto\n");                                                            //Si los caracteres son distintos, entonces mustra en pantalla que no es palíndromo.
            return;
        }
    }
}
