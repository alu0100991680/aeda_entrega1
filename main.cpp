#include <iostream>
#include "mystruct.h"
#include "myvector.h"
#include "mystack.h"
#include "mytail.h"
#include "mylinkedlist.h"

using namespace std;

int main(int argc, char** argv) {
    
    TDATO a;
    a.cod = 1;
    a.name = "Ramón";  
    a.surname = "Negrillo Valdivia";
    
    TDATO b;
    b.cod = 2;
    b.name = "Yezer";  
    b.surname = "Gonzalez Mella";
    
    TDATO c;
    c.cod = 3;
    c.name = "Rayco";  
    c.surname = "Serpa Alemani";
    
    TDATO d;
    d.cod = 4;
    d.name = "Ana Maria";  
    d.surname = "Nesoya Marquez";
    
    //TAIL BLOCK
    /*
    mytail *v = new mytail();
    v->debug(false);
    
    cout << " ================= " << endl;
    cout << "|      MYTAIL     |" << endl;
    cout << " ================= " << endl << endl;

    //Introducimos 3 usuario
    cout << "Introducimos Rámon, Yezer, Rayco. Mostramos resultado push" << endl;
    v->push(a);
    v->push(b);
    v->push(c);
    v->show();
    
    //Extraemos el primero que por ser FIFO será Rayco
    cout << "Extraemos Ramón. Mostramos resultado pop y el último estado de la pila" << endl;
    TAILNODE u = v->pop();
    cout << u.mynode.cod << endl;
    cout << u.mynode.name << endl;
    cout << u.mynode.surname << endl;
    v->show();

    //Sacamos en exceso usurios hasta vaciarla y mostramos
    v->pop();
    v->pop();
    v->pop();
    v->pop();
    v->pop();
    v->show();
    
    //Introducimos 1 usuario
    cout << "Introducimos Ana, mostramos el contenido númerico y resultado de la pila" << endl;
    v->push(d);
    cout << "Count: " << v->count() << endl;
    v->show();
    
    //Vaciamos la pila con clear
    cout << "Vaciamos la pila con clear y verificamos tamaño con count()" << endl;
    v->clear();
    cout << "Count: " << v->count() << endl;
    
    delete v;
    */
    
    //LINKEDLIST BLOCK
    /*
    mylinkedlist *v = new mylinkedlist();
    v->debug(false);
    
    cout << " ================= " << endl;
    cout << "|  MYLINKEDLIST   |" << endl;
    cout << " ================= " << endl << endl;
    
    //Introducimos 3 usuario
    cout << "Introducimos Rámon, Yezer, Rayco. Mostramos resultado de la lista" << endl;
    v->add(a);
    v->add(b);
    v->add(c);
    v->show();
    
    //Get
    cout << "Visualizamos con get el usuario 0 y 2" << endl;
    LINKEDLISTNODE u = v->get(0);
    cout << u.mynode.cod << endl;
    cout << u.mynode.name << endl;
    cout << u.mynode.surname << endl;
    cout << "-----" << endl;
    LINKEDLISTNODE f = v->get(2);
    cout << f.mynode.cod << endl;
    cout << f.mynode.name << endl;
    cout << f.mynode.surname << endl;

    //Removeat 1
    cout << "Eliminamos el usuario Yezer. Y verificamos como queda la lista y contabilizamos elementos" << endl; 
    v->removeat(1);
    v->show();
    cout << "Count: " << v->count() << endl;
    
    //Remove el ultimo en este caso Rayco
    cout << "Eliminamos el último en este caso Rayco. Y verificamos como queda la lista y contabilizamos elementos" << endl; 
    v->removeat(1);
    v->show();
    cout << "Count: " << v->count() << endl;
    
    //Add. Introducimos 1 usuario. Ana
    cout << "Añadimos a Ana. Y verificamos como queda la lista y contabilizamos elementos" << endl; 
    v->add(d);
    v->show();
    cout << "Count: " << v->count() << endl;

    //Eliminamos la posicion 0
    cout << "Eliminamos la posicion 0 y verificamos si Ana-Next apunta a 0x0" << endl; 
    v->removeat(0);
    v->show();
    cout << "Count: " << v->count() << endl;
    
    //Vaciamos la pila con clear
    cout << "Vaciamos la pila con clear y verificamos tamaño con count()" << endl;
    v->clear();
    cout << "Count: " << v->count() << endl;
    
    delete v;
    */
    
    //STACK BLOCK
    /*
    mystack *v = new mystack();
    v->debug(false);
    
    cout << " ================= " << endl;
    cout << "|     MYSTACK     |" << endl;
    cout << " ================= " << endl << endl;
    
    //Introducimos 3 usuario
    cout << "Introducimos Rámon, Yezer, Rayco. Mostramos resultado push" << endl;
    v->push(a);
    v->push(b);
    v->push(c);
    v->show();
    
    //Extraemos el primero que por ser LIFO será Rayco
    cout << "Extraemos Rayco. Mostramos resultado pop y el último estado de la pila" << endl;
    STACKNODE u = v->pop();
    cout << u.mynode.cod << endl;
    cout << u.mynode.name << endl;
    cout << u.mynode.surname << endl;
    v->show();

    //Sacamos en exceso usurios hasta vaciarla y mostramos
    v->pop();
    v->pop();
    v->pop();
    v->pop();
    v->pop();
    v->show();
    
    //Introducimos 1 usuario
    cout << "Introducimos Ana, mostramos el contenido númerico y resultado de la pila" << endl;
    v->push(d);
    cout << "Count: " << v->count() << endl;
    v->show();
    
    //Vaciamos la pila con clear
    cout << "Vaciamos la pila con clear y verificamos tamaño con count()" << endl;
    v->clear();
    cout << "Count: " << v->count() << endl;
    
    delete v;
    */
    
    //STACK BLOCK
    /*
    myvector *v = new myvector();
    v->debug(false);
    
    cout << " ================= " << endl;
    cout << "|    MYVECTOR     |" << endl;
    cout << " ================= " << endl << endl;
    
    //Introducimos 3 usuario
    cout << "Introducimos Rámon, Yezer, Rayco. Mostramos resultado push. Mostramos el contenedor" << endl;
    v->add(a);
    v->add(b);
    v->add(c);
    v->show();
    
    //Inserción
    cout << "Insertamosa a Ana en la posición de Yezer. Desplazando al resto. Mostramos el contenedor" << endl;
    v->insert(d, 1);
    v->show();
    
    //Removeat
    cout << "Eliminamos la primera posición donde esta Ramón. Desplazamos al resto. Mostramos el contenedor" << endl;
    v->removeat(0);
    v->show();
    
    //Remove
    cout << "Eliminamos por detras la posición de Rayco. Desplazamos al resto. Mostramos el contenedor" << endl;
    v->remove();
    v->show();
    
    //Get
    cout << "Visualizamos el elemento 0 que en este momento es David" << endl;
    TDATO t = v->get(0);
    cout << "cod-> " << t.cod << endl;
    cout << "name-> " << t.name << endl;
    cout << "surname-> " << t.surname << endl << endl;
    
    
    //Vaciamos la pila con clear
    cout << "Vaciamos la pila con clear y verificamos tamaño con count()" << endl;
    v->clear();
    cout << "Count: " << v->count() << endl;
    
    delete v;
    */
    return 0;
}

