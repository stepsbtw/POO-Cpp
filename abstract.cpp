#include <iostream>

// "classe abstrata" em c++ 
// pelo menos um metodo puramente virtual.

// interface por ex: somente metodos puramente virtuais.

class Instrumento{
public:
    virtual void somPuro() = 0; // metodo puramente virtual. nao vai dar erro.
};

class InstrumentoNaoAbstrato{
public:
    virtual void som(){
        std::cout << "som generico"; // metodo virtual, implementado.
    }    
};

// classes abstratas nao podem ser instanciadas!

int main(){
    // Instrumento x; erro de compilacao. (INSTRUMENTO é abstrata!)
    InstrumentoNaoAbstrato x;
}