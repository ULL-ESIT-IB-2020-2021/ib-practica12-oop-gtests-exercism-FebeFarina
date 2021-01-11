#ifndef COMPLEJO_H
#define COMPLEJO_H

#include <iostream>
class Complejo {
    private:
        int real_part;
        int imaginary_part;
    public:
        Complejo(int real_part, int imaginary_part);
        int GetReal() {return real_part;}
        int GetImaginary() {return imaginary_part;}
        friend Complejo operator+(const Complejo& numero1, const Complejo& numero2);
        friend Complejo operator-(const Complejo& numero1, const Complejo& numero2);
        friend std::ostream& operator<<(std::ostream &out, const Complejo& numero);
        Complejo Add(const Complejo& numero1, const Complejo& numero2);
        Complejo Print(const Complejo& numero);
        Complejo Sub(const Complejo& numero1, const Complejo& numero2);
};


#endif