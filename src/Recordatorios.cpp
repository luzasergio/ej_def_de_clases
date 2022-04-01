#include <iostream>
#include <list>

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

class Horario{

public:
    Horario (uint hora, uint min);
    uint hora();
    uint min();

    //Para el ejercicio 12
    bool operator < (Horario h);

private:
    uint hora_;
    uint min_;
};

Horario::Horario(uint hora, uint min) : hora_(hora), min_(min){} //Constructor de la clase

uint Horario::hora() {
    return this -> hora_;
}

uint Horario::min() {
    return this -> min_;
}

ostream& operator<<(ostream& os, Horario h) {
    os  <<  h.hora() << ":" << h.min();
    return os;
}

//Ejercicio 12

bool Horario::operator<(Horario h) {
    if (this -> hora() < h.hora()){
        return true;
    }
    else{
        if (this -> hora() == h.hora())
            return this -> min() < h.min();
        else
            return false;
    }
}




// Ejercicio 13

class Recordatorio {

public:

    Recordatorio(Fecha f, Horario h, string mensaje);
    Fecha fecha();
    Horario horario();
    string mensaje();

private:

    Fecha fecha_;
    Horario horario_;
    string mensaje_;
};

Recordatorio ::Recordatorio(Fecha f, Horario h, string mensaje) :
                    fecha_(f.mes(), f.dia()), horario_(h.hora(), h.min()), mensaje_(mensaje){}

Fecha Recordatorio::fecha() {
    return this->fecha_;
}

Horario Recordatorio::horario() {
    return this ->horario_;
}

string Recordatorio::mensaje() {
    return mensaje_;
}

ostream& operator<<(ostream& os, Recordatorio r) {
    os  <<  r.mensaje() << " @ " << r.fecha() << " " << r.horario();
    return os;
}

// Ejercicio 14

// Clase Agenda

class Agenda {

public:
    Agenda(Fecha fecha_inicial);
    void agregar_recordatorio(Recordatorio rec);
    void incrementar_dia();
    Fecha hoy();
    list<Recordatorio> recordatorios_de_hoy();


private:
    Fecha fecha_actual_;
    list<Recordatorio> recordatorios_; //Supongo que se inicializa con la lista vacía
};

Agenda::Agenda(Fecha fecha_inicial) : fecha_actual_(fecha_inicial.mes(), fecha_inicial.dia()){}

void Agenda::agregar_recordatorio(Recordatorio rec) {
    this ->recordatorios_.push_back(rec);
}

void Agenda::incrementar_dia() {
    this->fecha_actual_.incrementar_dia();
}

Fecha Agenda::hoy() {
    return fecha_actual_;
}

list<Recordatorio> Agenda::recordatorios_de_hoy() {
    list<Recordatorio> res;

    for (Recordatorio rec : recordatorios_) {
        if(rec.fecha() == this->hoy())
            res.push_back(rec);
    }
    return res;
}

vector<Recordatorio> ordenar_lista(list<Recordatorio> lista){
    vector<Recordatorio> res;
    for (Recordatorio rec : lista) {
        res.push_back(rec);
    }

    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res.size() -i; ++j) {

            if (res[j+1].horario() < res[j].horario()){
                swap(res[j], res[j+1]);
            }
        }
    }
    return res;
}


ostream& operator<<(ostream& os, Agenda a) {
    //a.recordatorios_de_hoy().sort();
    vector<Recordatorio> res = ordenar_lista(a.recordatorios_de_hoy()); //Recordatorios del día ordenados en un vector

    os  <<  a.hoy() << endl << "=====" << endl;

    for(int i = 0; i < res.size(); i++){
        os << res[i].mensaje() << " @ " << res[i].fecha() << " " << res[i].horario() << endl;
    }
    //os  <<  a.hoy() << endl << "=====" << endl;
    return os;
}