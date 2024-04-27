#include <iostream>
#include <list>
#include <string>

// iterator entao é uma classe interna a list<type>

using namespace std;

int main(){
    list<string> l = {"joao","caio","renato","bia"};

    for(string s : l){
        cout << s << endl;
    }

    // pode ser itr++ tbm.
    for(list<string>::iterator itr = l.begin(); itr != l.end(); advance(itr,1)){
        cout << *itr << endl;
    }

    // entao pra acessar um elemento da lista é O(n).
    list<string>::iterator itr = l.begin();
    advance(itr,2); // itr no terceiro elemento
    cout << "terceiro elemento: " << *itr << endl;

}
