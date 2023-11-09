#include <vector>
#include "estudiante.h"

std::vector<Estudiante> filtrar_por_grado(const std::vector<Estudiante>& estudiantes, const std::string& grado) {
    std::vector<Estudiante> estudiantes_filtrados;

    for (const auto& estudiante : estudiantes) {
        if (estudiante.grado == grado) {
            estudiantes_filtrados.push_back(estudiante);
        }
    }

    return estudiantes_filtrados;
};
