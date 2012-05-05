/*
 * File:   CalcPolonesa.cpp
 * Author: Bruno Villas Boas da Costa
 * RA:317527
 *
 * Created on 1 de Outubro de 2009, 18:10
 */

#include "CalcPolonesa.h"

/*Construtor:
 *  constrói o objeto vetor começando com -1 para ele ter tamanho de 0 até tam.
 */
CalcPolonesa::CalcPolonesa() {
    topo = -1;
}

/*Método empty:
 *  se a pilha estiver vazia, retorna true, caso contrário, retorna false.
 */
bool CalcPolonesa::empty() {
    if (topo == -1)
        return true;
    return false;
}

/*Método full
 *  se a pilha estiver cheia, retorna true, caso contrario, retorna false.
 */
bool CalcPolonesa::full() {
    if (topo == tam - 1)
        return true;
    return false;
}

/*Método push:
 * se a pilha nao estiver cheia, insere o parametro x na pilha e acresce o
 * valor do topo, retornando true. Caso contrario, retorna false.
 */
bool CalcPolonesa::push(int x) {
    if (full())
        return false;
    topo++;
    vetorPilha[topo] = x;
    return true;
}

/*Método pop:
 * se a pilha nao estiver vazia, retira o topo, retornando true. Caso
 * contrario, retorna false.
 */
bool CalcPolonesa::pop() {
    if (empty())
        return false;
    topo--;
    return true;
}

/*Método top:
 * se a pilha nao estiver vazia, retorna o topo para o parametro passado e
 * retorna true. caso contrario, retorna false.
 */
bool CalcPolonesa::top(int &item) {
    if (empty())
        return false;
    item = vetorPilha[topo];
    return true;
}

/*Método print:
 * enquanto a pilha nao estiver vazia, imprime o topo da pilha e o retira,
 * colocando-o em uma pilha auxiliar para não haver perda de informacao.
 * Após feito isso, a pilha é reconstruída com os itens da pilha auxiliar.
 */
void CalcPolonesa::print() {
    CalcPolonesa Aux;
    int x;
    while (!empty()) {
        top(x);
        cout << x << " ";
        pop();
        Aux.push(x);
    }
    while (!Aux.empty()) {
        Aux.top(x);
        Aux.pop();
        push(x);
    }
}
