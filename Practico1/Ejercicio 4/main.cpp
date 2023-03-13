#include "Cpp/Segmento.cpp";
#include "Cpp/Punto.cpp";
#include <iostream>

int main() {
    Punto p1(0,0);
    Punto p2(1,1);

    Segmento segment(p1, p2);

    cout << "Largo del segmento" << segment.CalularLargoSegmento() << "\n";

    return 0;
}