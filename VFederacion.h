/*
 *  VFederacion.h
 *  Creado: 15/10/2011
 *  Autor: Prof. Luis Pereira
 *  Ajustado: 19/03/2012
 */

#ifndef VFEDERACION_H_
#define VFEDERACION_H_
#include <cstdlib>  // uso system("cls") y system("pause")
#include <iostream> // entrada y salida
#include <iomanip> // impresi�n datos float con precisi�n decimales
using namespace std;

class VFederacion
{
   public:
      VFederacion();
      void ImprimirResultadosJornadas(float porc1, int tmari, float porc2);
};
#endif // VFEDERACION_H_
