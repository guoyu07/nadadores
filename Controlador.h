/*
 *  Controlador.h
 *  Creado: 15/10/2011
 *  Autor: Prof. Luis Pereira
 *  Ajustado: 19/03/2012
 */

#ifndef CONTROLADOR_H_
#define CONTROLADOR_H_

#include "MFederacion.h"
// MFederacion incluye a MNadador y a su vez MNadador incluye a MCompetencia
#include "VCompetencia.h"
#include "VNadador.h"
#include "VFederacion.h"

class Controlador
{
  private:
	MFederacion mfedera;
  public:
    Controlador();
    void ProcesarJornadaNatacion();
    void ReporteFederacion();
};
#endif // CONTROLADOR_H_
