#include "complejo.h"

int main() {
    Complejo complejo1{4,5}, complejo2{7,-8};
    Complejo resultado{0,0};
    resultado = Complejo::Add(complejo1,complejo2);
    Complejo::Print(resultado);
    resultado = Complejo::Sub(complejo1,complejo2);
    Complejo::Print(resultado);

}