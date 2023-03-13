#include <string>

class Vehiculo{
    private:
        std::string _nombre;
        std::string _modelo;
        std::string _marca;
        int _cantidadRuedas;
        int _añoDeFabricacion;
    public:
        Vehiculo();
        Vehiculo(std::string nombre, std::string modelo, std::string marca, int cantidadruedas, int añoFabricacion);
        virtual ~Vehiculo() = default;
        virtual void Encender() const;
        virtual void Apagar() const;
        virtual void Acelerar() const;
};