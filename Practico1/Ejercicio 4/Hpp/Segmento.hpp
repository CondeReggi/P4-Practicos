#include "Punto.hpp"

class Segmento{
    private:
        Punto _a;
        Punto _b;
    public:
        Segmento();
        Segmento(Punto a, Punto b);
        virtual ~Segmento();
        void SetPuntoA(Punto a);
        void SetPuntoB(Punto b);
        void MostrarCoordenadas();
        double CalularLargoSegmento();
};