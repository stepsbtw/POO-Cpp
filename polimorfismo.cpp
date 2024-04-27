#include <iostream>
using namespace std;

class Animal{
public:
    void som(){
        cout << "som de animal generico\n";
    }
    // virtual funciona como java.
    // caso a classe filho tenha implementado, roda aquela.
    virtual void somVirtual(){
        cout << "som de animal generico(virtuuual)\n";
    }
};

class Cachorro : public Animal{
public:
    void som(){
        cout << "auau\n";
    }
    void somVirtual(){
        cout << "auau\n";
    }
};

class Gato : public Animal{
public:
    void som(){
        cout << "miau\n";
    }
};

int main(){
    Cachorro c1;
    c1.som();

    Animal* a1 = new Cachorro();
    a1->som(); // deveria rodar o som da classe mais externa
    // pra isso a funcao precisa ser "VIRTUAL"
    a1->somVirtual();

    Animal* a2 = new Gato();
    a2->somVirtual();
    // caso o gato nao tenha somVirtual implementado, vai rodar o generico.

    Gato g1;
    g1.somVirtual(); // mesma coisa que so som!

    delete a1;
    delete a2;
}