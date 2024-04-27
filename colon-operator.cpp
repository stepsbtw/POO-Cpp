// o operador "::" é usando pra acessar
// namespaces, classes ou estruturas.

#include <iostream>

// um namespace nao precisa é INSTANCIADO.
// acessar seus membros nao usa "." ou "->"
namespace MyNamespace{
    std::string myFunction(){
        return "funcao namespace!\n";
    }
}

// tambem utilizado para acessar membros static.
// ja que tambem nao é instanciado!
class MyClass{
public:
    static int myStaticVar;
    static std::string myStaticFunc(){
        return "funcao static!\n";
    }
};

// tambem utilizado para acessar classes internas.
class Externa{
public:
    class Interna{
    public:
        void oi(){
            std::cout << "oi\n";
        }
        static void oiStatic(){
            std::cout << "oi static!\n";
        }
    };
};

// variaveis static sao confusas.
// é diferente de java. nao é uma variavel pra todas as instancias.
int MyClass::myStaticVar = 5;

int main(){
    std::string x = MyNamespace::myFunction();
    std::cout << x;
    
    int y = MyClass::myStaticVar;
    std::cout << y << std::endl;
    
    MyClass::myStaticVar = 7;
    std::cout << y << " " << MyClass::myStaticVar << std::endl;

    std::string z = MyClass::myStaticFunc();
    std::cout << z;

    // classe filho nao pode ser acessada diretamente.
    Externa::Interna interno;
    interno.oi();

    Externa::Interna *interna = new Externa::Interna();
    interna->oi();
    delete interna;

    Externa::Interna::oiStatic();
    interno.oiStatic();
}