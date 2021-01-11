#ifndef FECHA_H
#define FECHA_H

class Fecha{
    private:
        int dia, mes, anyo;
    public:
        Fecha(int dia, int mes, int anyo);
        bool Bisiesto();
        int GetDia() const {return dia;}
        int GetMes() const {return mes;}
        int GetAnyo() const {return anyo;}
        friend bool operator>(const Fecha& fecha1, const Fecha& fecha2);
        friend bool operator<(const Fecha& fecha1, const Fecha& fecha2);
        friend bool operator==(const Fecha& fecha1, const Fecha& fecha2);
};


#endif