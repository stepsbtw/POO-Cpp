#include <cstdlib>
#include <iostream>
#include <list>

// "list" is DOUBLY LINKED LIST.

using namespace std;

void printList(list<int> l){
    for(int x : l){
        cout << x << " ";
    }
    cout << endl;
}

void printList2(list<int> *l){
    // posso desreferenciar!
    for(int x : *l){
        cout << x << " ";
    }
}

int main(){
    //list<int>* l0 = (list<int>*)malloc(sizeof(list<int>));
    list<int>* l1 = new list<int>();
    list<int> l;
    //free(l0);
    delete l1;

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    printList(l);
    
    l.push_front(4);
    printList(l);
    
    l.reverse();
    printList(l);
    
    cout << "size: " << l.size() << endl;
    
    l.sort();

    printList(l);
}