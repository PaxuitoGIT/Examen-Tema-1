#include <iostream>
#include <vector>
#include "estudiante.h"
#include "promedioestudiante.h"
#include "asistencia.h"

std::vector<Estudiante> filtrar_por_grado(const std::vector<Estudiante>& estudiantes, const std::string& grado) {
    std::vector<Estudiante> estudiantes_filtrados;

    for (const auto& estudiante : estudiantes) {
        if (estudiante.grado == grado) {
            estudiantes_filtrados.push_back(estudiante);
        }
    }

    return estudiantes_filtrados;
}

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

    std::vector<int> calificaciones = { 10, 5, 8, 7};
    double promedio = calcular_promedio(calificaciones);

    std::cout << "El promedio del estudiante es: " << promedio << std::endl;

    RegistroAsistencia asistencia;
    asistencia.fecha = "9/11/2023";
    asistencia.estado = "Asistio";

    asistencia.mostrar_asistencia();

    return 0;
}