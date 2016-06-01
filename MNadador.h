/*  MNadador.h
 *  Creado: 15/10/2011
 *  Autor: Prof. Luis Pereira
 *  Ajustado: 19/03/2012
 */
#ifndef MNADADOR_H_
#define MNADADOR_H_

#include <string>
#include "MCompetencia.h"
using namespace std;

class MNadador
{
      private:
        string cedula;
        string nombre;
        int equipo, ctcompetencias, ctmedallas;
      public:
        MNadador();
        void SetCedula(string c);
        void SetNombre(string n);
        void SetEquipo(int eq);
        void SetCtCompetencias(int ct);
        void SetCtMedallas(int ct);
        string GetCedula();
        string GetNombre();
        int GetEquipo();
        int GetCtCompetencias();
        int GetCtMedallas();
        void ProcesarCompetencia(MCompetencia compe); // Relacion Uso
};
#endif // MNADADOR_H_
