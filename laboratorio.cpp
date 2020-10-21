#include "laboratorio.h"

Laboratorio::Laboratorio() {
  cont = 0;
}

void Laboratorio::agregarFinal(const Computadora &c) {
  if (cont < 5) {
    arreglo[cont] = c; 
    cont++;
  }
  else {
    cout << "Arreglo lleno..." << endl;
  }
}

void Laboratorio::mostrar() {
  cout << left;
  cout << setw(25) << "Sistema Operativo";
  cout << setw(25) << "Modelo";
  cout << setw(25) << "Procesador";
  cout << setw(15) << "RAM";
  cout << endl;
  for (size_t i = 0; i < cont; i++) {
    Computadora c = arreglo[i];
    // cout << "Sistema Operativo: " << c.getSisOp() << endl;
    // cout << "Modelo: " << c.getModelo() << endl;
    // cout << "Procesador: " << c.getProcesador() << endl;
    // cout << "Memoria Ram: " << c.getMemoriaRam() << " GB" << endl;
    // cout << endl;

    cout << c;
  }
}