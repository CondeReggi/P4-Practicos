#include "./Hpp/Segmento.hpp"
#include <string>
#include <cmath>
#include <iostream>
using namespace std;

Segmento::Segmento() {};
Segmento::Segmento(Punto a, Punto b)
{
    _a = a;
    _b = b;
}

void Segmento::SetPuntoA(Punto a){
    _a = a;
};
void Segmento::SetPuntoB(Punto b){
    _b = b;
};

void Segmento::MostrarCoordenadas(){
    cout << "Punto a => X: " << _a.GetX() << " " << "Y: " << _a.GetY() << "\n";
    cout << "Punto b => X: " << _b.GetX() << " " << "Y: " << _b.GetY() << "\n";
}

double Segmento::CalularLargoSegmento(){
    return sqrt(pow(_a.GetX() - _b.GetX(), 2) + pow(_a.GetY() - _b.GetY(), 2));
};