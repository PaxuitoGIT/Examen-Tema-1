#include <iostream>
#include <string>

class RegistroAsistencia {
    public:
    std::string fecha;
    std::string estado;

    void mostrar_asistencia() {
        std::cout << "Fecha: " << fecha << ", Estado: " << estado << std::endl;
    }
};