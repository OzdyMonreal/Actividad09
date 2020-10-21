#include <iostream>
#include "laboratorio.h"

using namespace std;

int main() {
  Computadora comp1;
  Computadora comp2;
  Computadora comp3;

  Laboratorio lab;
  lab.agregarFinal(comp1);
  lab.agregarFinal(comp2);
  lab.agregarFinal(comp3);

  lab.mostrar();
  return 0;
}
