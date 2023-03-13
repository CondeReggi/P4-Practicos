#include <string>

class Institucion{
    private: 
        std::string _nombre;
        std::string _fechaFundacion;
    public:
        Institucion();
        Institucion(std::string nombre, std::string fechaFundacion);
        virtual ~Institucion() = default;
};