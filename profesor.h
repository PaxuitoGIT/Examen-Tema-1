#include <iostream>
#include <string>

class Profesor {
    public:
    std::string nombre;
    int edad;
    std::string materia;
    int anos_experiencia;

    void mostrar_info_profesor() const {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Materia: " << materia << std::endl;
        std::cout << "Años de experiencia: " << anos_experiencia << std::endl;
    }
};