class Estudiante {
    public:
        std::string nombre;
        int edad;
        std::string grado;

        void mostrar_info() {
            std::cout << "Nombre: " << nombre << std::endl;
            std::cout << "Edad: " << edad << std::endl;
            std::cout << "Grado: " << grado << std::endl;
        }
}