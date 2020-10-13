#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>

using namespace std;

class Computadora {
  string sisOp;
  string modelo;
  string procesador;
  int memoriaRam;

public:
  Computadora();
  Computadora(const string &sisOp, const string &modelo, const string &procesador, int memoriaRam);

  void setSisOp(const string &sisOp);
  string getSisOp();
  void setModelo(const string &modelo);
  string getModelo();
  void setProcesador(const string &procesador);
  string getProcesador();
  void setMemoriaRam(int memoriaRam);
  int getMemoriaRam();
};

#endif