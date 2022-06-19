#ifndef INC_12_1_HERRERAOCAMPOMARTIN_PERSONAS_H
#define INC_12_1_HERRERAOCAMPOMARTIN_PERSONAS_H

typedef struct persona{
    int edad;
    char *nombre;
    struct persona *siguiente;
} Persona;

typedef struct listaPersonas {
    int tam;
    struct persona *primera;
} ListaPersonas;

ListaPersonas *crearListaPersonas();
Persona *crearPersona(char *nombre, int edad);
void agregarPersona(ListaPersonas *lista, Persona *nueva);
float promedioEdadPersonas(ListaPersonas *lista);
void imprimirPersonas(ListaPersonas *lista);

#endif
