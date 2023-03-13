#include "./Hpp/Punto.hpp"
#include <string>
#include <iostream>
using namespace std;


Punto::Punto() {
    _x = 0;
    _y = 0;
}

Punto::Punto(int x, int y) : _x(x), _y(y) {}

void Punto::SetX(int x) { _x = x; }
void Punto::SetY(int y) { _y = y; }

int Punto::GetX() { return _x; }
int Punto::GetY() { return _y; }

void Punto::ObtenerCoordenadas() {
    cout << "X: " << this->_x << " " << "Y: " << this->_y << "\n";
}
