class Estudiante {
    public:
        std::string nombre;
        int edad;
        std::string grado;

        void mostrar_info() {
            try {
                if (nombre.empty() edad <= 0 grado.empty()) {
                    throw std::string("Error: No se ha ingresado informacion del estudiante");
                }
            }
            std::cout << "Nombre: " << nombre << std::endl;
            std::cout << "Edad: " << edad << std::endl;
            std::cout << "Grado: " << grado << std::endl;
        }
}