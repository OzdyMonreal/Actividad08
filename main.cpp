#include <iostream>
#include "laboratorio.h"

using namespace std;

int main() {
  Computadora comp1;
  Computadora comp2;
  // Computadora comp3;

  comp1.setSisOp("Windows");
  comp1.setModelo("Lenovo ideapad 530S");
  comp1.setProcesador("i7 8550u");
  comp1.setMemoriaRam(8);

  comp2.setSisOp("Linux - KDE Neon");
  comp2.setModelo("HP Omen 15");
  comp2.setProcesador("AMD Ryzen 7 4800H");
  comp2.setMemoriaRam(32);



  Laboratorio lab;
  lab.agregarFinal(comp1);
  lab.agregarFinal(comp2);

  lab.mostrar();
  return 0;
}
