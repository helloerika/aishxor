//
// Created by Erika Sánchez Femat on 2017-07-08.
//
#ifndef AISH_AND_XOR_AISHXOR_H
#define AISH_AND_XOR_AISHXOR_H

class Aishxor{

private:
    int suma;
    int numBits;

    void sumaXOR();
    void imprimir();

public:
    int n;
    int left;
    int right;
    int numRepeticiones;
    int arreglo[999];

    // Constructor default
    Aishxor();
    Aishxor(int nTam = 0, int l = 0, int r = 0, int nr = 0, int s = 0, int nb = 0);
    ~Aishxor();

    void obtenerDatos();
    void calcular();

    int getSuma() const;
    int getNumBits() const;
    void setSuma(int suma);
    void setNumBits(int numBits);
};

#endif //AISH_AND_XOR_AISHXOR_H