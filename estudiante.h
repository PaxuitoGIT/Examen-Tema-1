#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>


class Estudiante {
    public:
        std::string nombre;
        int edad;
        std::string grado;
        std::vector<std::string> materias;

        void registrar_materia (std::string materia) {
            materias.push_back(materia);
        }

        void mostrar_materias() {
            std::cout << "Materias: " << std::endl;
            for (const auto& materia : materias) {
                std::cout << materia << " ";
            }
            std::cout << std::endl;
        }

        void mostrar_info() {
            try {
                if (nombre.empty() && edad <= 0 && grado.empty()) {
                    throw std::string("Error: No se ha ingresado informacion del estudiante");
                }
            
            std::cout << "Nombre: " << nombre << std::endl;
            std::cout << "Edad: " << edad << std::endl;
            std::cout << "Grado: " << grado << std::endl;
        } catch (const std::invalid_argument& e) {
            std::cout << e.what() << std::endl;
        }
    }
};

#endif // ESTUDIANTE_H
