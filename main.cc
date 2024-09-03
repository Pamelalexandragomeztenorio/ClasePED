#include <iostream>
//Hola//
struct Persona
{
    std::string nombre;
    std::string apellido;
    int edad;
    std::string medio;
    std::string carrera;
};
const int cupo= 10;
struct Evento
{
    std::string Enombre;
    std::string fecha;
    std::string lista[cupo];
};

int main(int argc, char *argv[])
{
    std::cout << "Hello world" << std::endl;
    return 0;
}