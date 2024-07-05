#include <iostream>
#include "multiplicacion.h"

using namespace std;

int Multiplicacion(int a, int b) {
    int value = 0;
    for (int i = 1; i <= b; i++) {
        value += a;
    }
    return value;
}
