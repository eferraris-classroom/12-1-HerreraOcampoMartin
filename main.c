#include <stdio.h>
#include "Personas.h"

int main() {

    ListaPersonas *lista = crearListaPersonas();

    agregarPersona(lista, crearPersona("Juan", 93));
    agregarPersona(lista, crearPersona("Juana", 18));
    agregarPersona(lista, crearPersona("Juan 2", 53));
    agregarPersona(lista, crearPersona("Juana 2", 23));
    agregarPersona(lista, crearPersona("Juan 3", 65));

    printf("Cantidad de personas en la lista: %d\n", lista->tam);

    float promedio = promedioEdadPersonas(lista);
    printf("La edad promedio es de %.2f\n", promedio);

    return 0;
}
