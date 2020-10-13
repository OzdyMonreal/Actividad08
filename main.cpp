#include <iostream>
#include "laboratorio.h"

using namespace std;

int main() {
  Computadora comp1;

  comp1.setSisOp("Windows");
  comp1.setModelo("Lenovo ideapad 530S");
  comp1.setProcesador("i7 8550u");
  comp1.setMemoriaRam(8);

  Laboratorio lab;
  lab.agregarFinal(comp1);

  lab.mostrar();
  return 0;
}
