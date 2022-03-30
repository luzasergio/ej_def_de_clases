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

Rectangulo::Rectangulo(uint alto, uint ancho) : alto_(alto), ancho_(ancho) {}

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
    return alto() * ancho(); //son equivalentes ambas líneas?
    //return alto_ * ancho_;
}

// Ejercicio 2

class Elipse{

public:
    Elipse(uint r_a, uint r_b);
    uint r_a();
    uint r_b();
    float area();

private:
    uint r_a_;
    uint r_b_;
    float PI = 3.14;

};

Elipse::Elipse(uint r_a, uint r_b) : r_a_(r_a), r_b_(r_b){} //constructor que inicializa las variables

uint Elipse::r_b() {
    return r_b_;
}

uint Elipse::r_a() {
    return r_a_;
}

float Elipse::area() {
    return r_a() * r_b_ * PI;
}

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

Cuadrado::Cuadrado(uint lado): r_(lado, lado) {}//Inicializa el objeto con un rectángulo de lados iguales

uint Cuadrado::lado() {
    return r_.alto();
    // Completar
}

float Cuadrado::area() {
    return lado() * lado();
    // Completar
}

// Ejercicio 4
//Puedo definir un círculo partiendo de una elipse con valores a = b

// Clase Circulo
class Circulo {

public: //Es lo que denominamos la interfaz
    Circulo(uint radio);

    uint radio(); //Función que devuelve el radio de un círculo
    float area(); //Función que devuelve el área de un círculo

private:
    Elipse e_; //Voy a usar que un círculo es una elipse con valores a = b
    float PI = 3.14;//Puedo definir pi una única vez?
};

Circulo::Circulo(uint radio) : e_(radio, radio){} //Inicializa el objeto con una elipse de lados iguales
uint Circulo::radio() {
    return e_.r_a();
}
float Circulo::area() {
    return PI * e_.r_a() * e_.r_a();
}

// Ejercicio 5

ostream& operator<<(ostream& os, Rectangulo r) {
    os << "Rect(" << r.alto() << ", " << r.ancho() << ")";
    return os;
}

ostream& operator<<(ostream& os, Elipse e) {
    os << "Elipse(" << e.r_a() << ", " << e.r_b() << ")";
    return os;
}

// ostream Elipse

// Ejercicio 6

ostream& operator<<(ostream& os, Cuadrado c) {
    os << "Cuad(" << c.lado()  << ")";
    return os;
}

ostream& operator<<(ostream& os, Circulo circ) {
    os << "Circ(" << circ.radio()  << ")";
    return os;
}
