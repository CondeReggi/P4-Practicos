#include "Vehiculo.hpp";

class Bicicleta: public Vehiculo{
    public: 
        Bicicleta();
        Bicicleta(std::string nombre, std::string modelo, std::string marca, int cantidadruedas, int añoFabricacion);
        virtual void Encender() const override;
        virtual void Apagar() const override;
        virtual void Acelerar() const override;
};
