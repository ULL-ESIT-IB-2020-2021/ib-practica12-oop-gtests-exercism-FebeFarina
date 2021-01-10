class Fecha{
    private:
        int dia, mes, anyo;
    public:
        Fecha(int, int, int);
        bool Bisiesto();
};

Fecha::Fecha(int _dia, int _mes, int _anyo){
    dia = _dia;
    mes = _mes;
    anyo = _anyo;
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