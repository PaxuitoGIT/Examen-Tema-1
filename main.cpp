#include <iostream>
#include <vector>
#include "estudiante.h"
#include "promedioestudiante.h"
#include "asistencia.h"
#include "filtro.h"

class MateriaYaRegistradaException : public std::exception {
    public:
    const char* what() const throw() {
        return "La materia ya fue registrada";
    }
};
int main() {

    Estudiante estudiante1;
    estudiante1.nombre = "Binhao";
    estudiante1.edad = 18;
    estudiante1.grado = "Informatica";

    Estudiante estudiante2;
    estudiante2.nombre = "Juan";
    estudiante2.edad = 20;
    estudiante2.grado = "Informatica";

    Estudiante estudiante3;
    estudiante3.nombre = "Maria";
    estudiante3.edad = 19;
    estudiante3.grado = "Matematicas";

    estudiante1.registrar_materia("Fisica");
    estudiante1.registrar_materia("Matematicas");
    estudiante1.registrar_materia("Programacion");

    try {
        estudiante1.registrar_materia("Fisica");
    } catch (const MateriaYaRegistradaException& e) {
        std::cerr << e.what() << std::endl;
    }

    estudiante1.mostrar_info();
    estudiante1.mostrar_materias();

    std::vector<int> calificaciones = { 10, 5, 8, 7};
    double promedio = calcular_promedio(calificaciones);

    std::cout << "El promedio del estudiante es: " << promedio << std::endl;

    RegistroAsistencia asistencia;
    asistencia.fecha = "9/11/2023";
    asistencia.estado = "Asistio";

    asistencia.mostrar_asistencia();

    std::vector<Estudiante> estudiantes = { estudiante1, estudiante2, estudiante3 };
    std::vector<Estudiante> estudiantes_filtrados = filtrar_por_grado(estudiantes, "Informatica");

    for (auto& estudiante : estudiantes_filtrados) {
    estudiante.mostrar_info();
}

    return 0;
}