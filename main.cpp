#include <iostream>
#include "estudiante.h"

int main() {
    Estudiante estudiante;

    estudiante.nombre = "Binhao";
    estudiante.edad = 18;
    estudiante.grado = "Informatica";

    estudiante.registrar_materia("Fisica");
    estudiante.registrar_materia("Matematicas");
    estudiante.registrar_materia("Programacion");

    estudiante.mostrar_info();
    estudiante.mostrar_materias();

    return 0;
}