/* 
 * File:   main.cpp
 * Author: Bruno Villas Boas da Costa
 * RA:317527
 * Created on 1 de Outubro de 2009, 18:10
 */
#include "CalcPolonesa.h"
#include <sstream>

int main() {

    CalcPolonesa c;
    string x;
    int var1, var2;
    cout << "digite os digitos para a calculadora polonesa reversa teclando <enter> apos cada digito: " << endl;
    while (getline(cin, x) && x != "=") {

        if (x == "+") {
            c.top(var1);
            c.pop();
            c.top(var2);
            c.pop();
            c.push(var1 + var2);
        } else {
            if (x == "-") {
                c.top(var1);
                c.pop();
                c.top(var2);
                c.pop();
                c.push(var1 - var2);
            } else {
                if (x == "/") {
                    c.top(var1);
                    c.pop();
                    c.top(var2);
                    c.pop();
                    c.push(var1 / var2);
                } else {
                    if (x == "*") {
                        c.top(var1);
                        c.pop();
                        c.top(var2);
                        c.pop();
                        c.push(var1 * var2);
                    } else {
                        int i;
                        stringstream ss(x);
                        ss >> i;
                        c.push(i);
                    }
                }
            }
        }
    }
    c.print();
    return 0;
}