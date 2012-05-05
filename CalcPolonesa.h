/* 
 * File:   CalcPolonesa.h
 * Author: Bruno Villas Boas da Costa
 * RA:317527
 * Created on 1 de Outubro de 2009, 18:10
 */

#ifndef _CALCPOLONESA_H
#define	_CALCPOLONESA_H

#define tam 20

using namespace std;
#include <iostream>
#include <stream.h>

class CalcPolonesa {
private:
    int vetorPilha[tam];
    int topo;
public:
    CalcPolonesa();
    bool push(int);
    bool pop();
    bool top(int &);
    bool empty();
    bool full();
    void print();
};

#endif	/* _CALCPOLONESA_H */

