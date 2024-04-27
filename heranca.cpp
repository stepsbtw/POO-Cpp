#include <iostream>
using namespace std;

class Veiculo{
public:
    string marca;
};

class Carro : public Veiculo{
public:
// ao criar um construtor eu desfaco o default
    Carro(){
        this->modelo = "volkswagen";
        this->marca = "kombi";
    }
    Carro(string modelo){
        this->modelo = modelo;
    }
    Carro(string modelo,string marca){ 
        this->modelo = modelo;
        this->marca = marca;
    }
    string modelo;

    void buzinar(){
        cout << this->marca << " " << this->modelo << " está buzinando!" << endl;
    }

};

int main(){
    Carro c1("mustang","chevrolet");
    c1.buzinar();

    Carro c2;
    c2.buzinar();

    Carro c3("fusca");
    cout << c3.marca; // aparentemente inicializado com NULL
    return 0;
}