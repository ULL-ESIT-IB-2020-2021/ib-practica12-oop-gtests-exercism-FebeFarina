#include "complejo.h"

Complejo::Complejo(int _real_part, int _imaginary_part) {
    real_part = _real_part;
    imaginary_part = _imaginary_part;
}

Complejo operator+(Complejo& numero1,Complejo& numero2) {
    return(Complejo(numero1.GetReal()+numero2.GetReal(),numero1.GetImaginary()+numero2.GetImaginary()));
}

Complejo operator-(Complejo& numero1,Complejo& numero2) {
    return(Complejo(numero1.GetReal()-numero2.GetReal(),numero1.GetImaginary()+numero2.GetImaginary()));
}

std::ostream& operator<<(std::ostream &out,Complejo& numero) {
    out << numero.GetReal() << "+" << numero.GetImaginary() << "i";
    return out;
}

Complejo Add(const Complejo& numero1, const Complejo& numero2){
    return(numero1 + numero2);
}
void Print(const Complejo& numero){
    std::cout << numero << std::endl;
}

Complejo Sub(const Complejo& numero1, const Complejo& numero2) {
    return(numero1 - numero2);
}