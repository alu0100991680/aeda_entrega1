#ifndef MYVECTOR_H
#define MYVECTOR_H

#include "mystruct.h"

class myvector {
    
public:
    //Estandar
    myvector();
    myvector(const myvector& orig);
    virtual ~myvector();
    //Práctica
    void show();
    void add(TDATO &d);
    void remove();
    int count();
    TDATO& get(int i);
    void insert(TDATO &d, int at);
    void removeat(int at);
    void clear();
    //Aux
    void debug(bool is_active);
private:
    void resize(int i);
    int length = 0;
    int max_limit = 0;
    bool debug_flag = false;
    struct TDATO *p_objects;
    void dmsg(std::string message);
};

#endif
