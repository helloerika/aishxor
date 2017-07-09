/*
 *
 * Aish and XOR
 * Propósito: Calcular el valor XOR de todos los elementos de izquierda a derecha
 * y el número de bits no asignados en el rango de un arreglo dado.
 *
 * @author: Erika Sánchez Femat
 * @version: 1.0 08/07/2017
 *
*/

// Header
#include <iostream>
#include "Header/Aishxor.h"

using namespace std;

int main() {
    Aishxor aishxor(0, 0, 0, 0, 0, 0);
    aishxor.obtenerDatos();
    aishxor.calcular();
}