#include "Personas.h"
#include <stdio.h>
#include <stdlib.h>

ListaPersonas *crearListaPersonas(){
    ListaPersonas *lista = (ListaPersonas*) malloc(sizeof (ListaPersonas));

    if(lista == NULL){
        printf("No hay memoria libre.");
        exit(-1);
    }

    lista->primera = NULL;
    lista->tam = 0;

    return lista;
}

Persona *crearPersona(char *nombre, int edad){
    Persona *persona = (Persona*) malloc(sizeof (Persona));

    if(persona == NULL){
        printf("No hay memoria libre.");
        exit(-1);
    }

    persona->nombre = nombre;
    persona->edad = edad;
    persona->siguiente = NULL;

    return persona;
}

void agregarPersona(ListaPersonas *lista, Persona *nueva){
    nueva->siguiente = lista->primera;
    lista->primera = nueva;
    lista->tam++;
}
float promedioEdadPersonas(ListaPersonas *lista){
    Persona *aux = lista->primera;
    if(aux == NULL){
        printf("No hay personas.\n");
        return 0;
    }

    float suma = 0;

    for(; aux != NULL; aux = aux->siguiente){
        suma += aux->edad;
    }

    return suma / lista->tam;
}

void imprimirPersonas(ListaPersonas *lista){
    Persona *aux = lista->primera;
    if(aux == NULL){
        printf("No hay personas.\n");
        return;
    }

    for(; aux != NULL; aux = aux->siguiente){
        printf("La persona %s tiene %d años.\n", aux->nombre, aux->edad);
    }
}