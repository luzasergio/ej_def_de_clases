#include <iostream>

using namespace std;

using uint = unsigned int;

// Ejercicio 1

class Rectangulo {
    public:
        Rectangulo(uint alto, uint ancho);
        uint alto();
        uint ancho();
        float area();

    private:
        int alto_;
        int ancho_;

};

Rectangulo::Rectangulo(uint alto, uint ancho) : alto_(alto), ancho_(ancho) {};

uint Rectangulo::alto() {
    return alto_;
    // Completar
}

// Completar definición: ancho
uint Rectangulo::ancho() {
    return ancho_;
}

// Completar definición: area
float Rectangulo::area() {
    //return alto() * ancho(); porque esto me da error?
    return alto_ * ancho_;
}

// Ejercicio 2

// Clase Elipse

// Ejercicio 3

class Cuadrado {
    public:
        Cuadrado(uint lado);
        uint lado();
        float area();

    private:
        Rectangulo r_;
};

Cuadrado::Cuadrado(uint lado): r_(lado, lado) {}

uint Cuadrado::lado() {
    // Completar
}

float Cuadrado::area() {
    // Completar
}

// Ejercicio 4

// Clase Circulo


// Ejercicio 5

ostream& operator<<(ostream& os, Rectangulo r) {
    os << "Rect(" << r.ancho() << ", " << r.alto() << ")";
    return os;
}

// ostream Elipse

// Ejercicio 6

