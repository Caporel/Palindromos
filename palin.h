/* 
 * File:   palin.h
 * Author: gino
 *
 * Created on October 20, 2019, 11:14 PM
 */

#ifndef PALIN_H
#define	PALIN_H

#define MAX 100
#define MAYUMINU 32                                         //Define constante utilizadda para transformar una mayúscula en minúscula o viceversa en ASCII.
#define NEXT 1                                              //Define constante para indicar siguiente. 
#define TERMI '\0'                                          //Define constante para terminador.
#define NO_ERROR 0

void fpali (char*, char*);                                  //Función que analiza si es palíndromo o no.
int initpal(char * frase);                                 //Función que recibe la frase ingresada por el usuario.

#endif	/* PALIN_H */

