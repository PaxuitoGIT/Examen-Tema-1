#include <vector>

double calcular_promedio(const std::vector<double>& calificaciones) {
    int suma = 0;
    for (const auto& calificacion : calificaciones) {
        suma += calificacion;
    }
    return static_cast<double>(suma) / calificaciones.size();
}