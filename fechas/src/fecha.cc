#include "fecha.h"

Fecha::Fecha(int _dia, int _mes, int _anyo){
    dia = _dia;
    mes = _mes;
    anyo = _anyo;
}

bool operator== (const Fecha& fecha1, const Fecha& fecha2){
    return((fecha1.GetAnyo() == fecha2.GetAnyo())&&(fecha1.GetMes() == fecha2.GetMes())&&(fecha1.GetDia() == fecha2.GetDia()));
}
bool operator<(const Fecha& fecha1, const Fecha& fecha2) {
    if (fecha1.GetAnyo() < fecha2.GetAnyo()) {
        return true;
    }
    if ((fecha1.GetAnyo() == fecha2.GetAnyo())&&(fecha1.GetMes() < fecha2.GetMes())) {
        return true;
    } 
    if ((fecha1.GetAnyo() == fecha2.GetAnyo())&&(fecha1.GetMes() == fecha2.GetMes())&&(fecha1.GetDia() < fecha2.GetDia())) {
        return true;
    }
    return false;
}
bool operator>(const Fecha& fecha1, const Fecha& fecha2) {
    if (fecha1.GetAnyo() > fecha2.GetAnyo()) {
        return true;
    }
    if ((fecha1.GetAnyo() == fecha2.GetAnyo())&&(fecha1.GetMes() > fecha2.GetMes())) {
        return true;
    } 
    if ((fecha1.GetAnyo() == fecha2.GetAnyo())&&(fecha1.GetMes() == fecha2.GetMes())&&(fecha1.GetDia() < fecha2.GetDia())) {
        return true;
    }
    return false;
}

bool Fecha::Bisiesto() {
    if (anyo % 4 == 0) {
        if (anyo % 100 == 0) {
            if (anyo % 400 == 0) {
                return true;
            }
            else {
                return false;
            }
        }
        else {
            return true;
        }
    }
    else {
        return false;
    }
}