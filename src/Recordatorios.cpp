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

    //Para el ejercicio 10
    void incrementar_dia(); //Función que incrementa en uno el día actual

    #if EJ >= 9 // Para ejercicio 9
    bool operator==(Fecha o);
    #endif

  private:
    //Completar miembros internos
    int mes_;
    int dia_;
};

Fecha::Fecha(int mes, int dia) : mes_(mes), dia_(dia){}

int Fecha::mes() {
    return mes_;
}

int Fecha::dia() {
    return dia_;
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

//Desarrollo del ejercicio 10
void Fecha ::incrementar_dia() {
    int mesActual = this -> mes();
    int diaActual = this -> dia();

    if (diaActual < dias_en_mes(mesActual)){
        dia_++;
    } else{
        dia_ = 1;
        if (mesActual == 12){
            mes_ = 1;
        } else
            mes_++;
    }
}



// Ejercicio 11, 12

// Clase Horario


// Ejercicio 13

// Clase Recordatorio


// Ejercicio 14

// Clase Agenda

