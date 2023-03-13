#include <string>
#include "Enums/TipoBoleto.hpp"

class Boleto{
private:
    std::string _precio;
    TipoBoleto _tipo;
public:
    Boleto();

    Boleto(std::string _precio, TipoBoleto tipo);

    virtual ~Boleto() = default;
};
