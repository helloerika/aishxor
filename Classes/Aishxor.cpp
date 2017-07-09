//
// Created by Erika Sánchez Femat on 2017-07-08.
//
#include <iostream>
#include <locale.h>
#include "../Header/Aishxor.h"
using namespace std;

Aishxor::Aishxor(int nTam, int l, int r, int nr, int s, int nb){
    this->n = nTam;
    this->left = l;
    this->right = r;
    this->numRepeticiones = nr;
    setSuma(s);
    setNumBits(nb);
}

void Aishxor::obtenerDatos() {
    cout<<"n: "<<"\n";
    cin>>this->n;
    for(int i = 1; i<=this->n; i++){
        cout<<"Arreglo["<<i<<"]"<<"\n";
        cin>>arreglo[i];
    }
    cout<<"queries: "<<"\n";
    cin>>this->numRepeticiones;
}

void Aishxor::sumaXOR() {
    while(this->numRepeticiones--){
        int s = 0;
        int nb = 0;
        cout<<"Bit izquierda:"<<"\n";
        cin>>this->left;
        cout<<"Bit derecha:"<<"\n";
        cin>>this->right;
        for(int i = this->left; i <=this->right; i++){
            s ^= arreglo[i];
            if(arreglo[i] == 0){
                nb++;
            }
        }
        setSuma(s);
        setNumBits(nb);
        imprimir();
    }
}

void Aishxor::calcular(){
    sumaXOR();
}

void Aishxor::imprimir() {
    cout<<"Suma XOR: "<<getSuma()<<" Bits sin asignar: "<<getNumBits()<<"\n";
}

int Aishxor::getSuma() const {
    return suma;
}
int Aishxor::getNumBits() const {
    return numBits;
}
void Aishxor::setSuma(int suma) {
    Aishxor::suma = suma;
}
void Aishxor::setNumBits(int numBits) {
    Aishxor::numBits = numBits;
}

Aishxor::~Aishxor() {

}
