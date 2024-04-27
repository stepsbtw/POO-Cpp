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
            cout << this->id << endl << this->preco<< endl;
        }

};

int main(){
    string id;
    cin >> id;

    Produto *p0 = (Produto*)(malloc(sizeof(Produto)));
    //new (p0)Produto(id); // sem essa linha, o id fica null
    
    Produto *p1 = new Produto(id);
    Produto p2(id);
    
    p0->setPreco(2000);
    p0->infoProduto();

    p1->setPreco(2000);
    p1->infoProduto();

    p2.setPreco(2000);
    p2.infoProduto();

    free(p0);
    delete p1;
    
    return 0;
}