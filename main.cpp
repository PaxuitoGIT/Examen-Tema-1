#include <iostream>
#include "estudiante.h"

int main() {
    Estudiante estudiante;

    estudiante.nombre = "Binhao";
    estudiante.edad = 18;
    estudiante.grado = "Informatica";

    estudiante.mostrar_info();

    return 0;
}