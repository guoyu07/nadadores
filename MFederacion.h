/*
 *  MFederacion.h
 *  Creado: 15/10/2011
 *  Autor: Prof. Luis Pereira
 *  Ajustado: 19/03/2012
 */
#ifndef MFEDERACION_H_
#define MFEDERACION_H_
#include "MNadador.h" // Automáticamente incluye a MCompetencia
class MFederacion
{
   private:
      int ctnadador, cteq2oro, ctmariposa,
          cteq1, ctotalmedallasoro;
   public:
      MFederacion();
      void SetCtNadador(int c1);
      void SetCtEq2Oro(int c2);
      void SetCtMariposa(int c3);
      void SetCtEq1(int c4);
      void SetCtotalMedallas(int c5);
      int GetCtNadador();
      int GetCtEq2Oro();
      int GetCtMariposa();
      int GetCtEq1();
      int GetCtotalMedallas();
      void ProcesarCompetenciaDelNadador(MNadador nada, MCompetencia compe); // Relacion uso con MNadador y MCompetencia
      void ProcesarNadador(MNadador nada); // Relación uso con MNadador
      float PorcentajeOroEq2();
      float PorcentajeNadaEq1();
};
#endif // MFEDERACION_H_
