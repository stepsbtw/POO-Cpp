#include <iostream>
#include <string>
using namespace std;

class Produto{
    private:
        std::string id;
        double preco = 250; // valor default

    public:
        Produto(std::string id){
            this->id = id;
        }

        string getId(){
            return this->id;
        }
        double getPreco(){
            return this->preco;
        }

        void setId(string id){
            this->id = id;
        }
        void setPreco(double preco){
            this->preco = preco;
        }

        void infoProduto(){
            cout << this->getId() << endl << this->getPreco();
        }

};

int main(){
    string id;
    cin >> id;
    //Produto* produto = new Produto(id);
    //produto->infoProduto();
    Produto produto(id); // crio o objeto sem precisar mexer com o ponteiro.
    produto.setPreco(2000);
    produto.infoProduto();
    return 0;
}