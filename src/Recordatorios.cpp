#include <iostream>

using namespace std;

using uint = unsigned int;

// Pre: 0 <= mes < 12
uint dias_en_mes(uint mes) {
    uint dias[] = {
        // ene, feb, mar, abr, may, jun
        31, 28, 31, 30, 31, 30,
        // jul, ago, sep, oct, nov, dic
        31, 31, 30, 31, 30, 31
    };
    return dias[mes - 1];
}

// Ejercicio 7, 8, 9 y 10

// Clase Fecha
class Fecha {
  public:
    // Completar declaraciones funciones
    Fecha(int mes, int dia); //Constructor de la clase
    int mes(); //devuelve el valor del mes
    int dia(); //devuelve el valor del dia

    #if EJ >= 9 // Para ejercicio 9
    bool operator==(Fecha o);
    #endif

  private:
    //Completar miembros internos
    int mes_;
    int fecha_;
};

Fecha::Fecha(int mes, int dia) : mes_(mes), fecha_(dia){}

int Fecha::mes() {
    return mes_;
}

int Fecha::dia() {
    return fecha_;
}

//Ejercicio 8

ostream& operator<<(ostream& os, Fecha f) {
    os  <<  f.dia() << "/" << f.mes();
    return os;
}


#if EJ >= 9
bool Fecha::operator==(Fecha o) {
    bool igual_dia = this->dia() == o.dia();
    bool igual_mes = this -> mes() == o.mes();
    // Completar iguadad (ej 9)
    return igual_dia && igual_mes;
}
#endif

// Ejercicio 11, 12

// Clase Horario


// Ejercicio 13

// Clase Recordatorio


// Ejercicio 14

// Clase Agenda

