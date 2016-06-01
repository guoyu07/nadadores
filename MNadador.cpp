/*  MNadador.cpp
 *  Creado: 15/10/2011
 *  Autor: Prof. Luis Pereira
 *  Ajustado: 19/03/2012
 */
#include "MNadador.h"

MNadador::MNadador()
{
	ctcompetencias = 0;
	ctmedallas = 0;
}
void MNadador::SetCedula(string c)
{
   cedula = c;
}
void MNadador::SetNombre(string n)
{
   nombre = n;
}
void MNadador::SetEquipo(int eq)
{
   equipo = eq;
}
void MNadador::SetCtMedallas(int ct)
{
   ctmedallas = ct;
}
void MNadador::SetCtCompetencias(int ct)
{
   ctcompetencias = ct;
}
string MNadador::GetCedula()
{
   return cedula;
}
string MNadador::GetNombre()
{
   return nombre;
}
int MNadador::GetEquipo()
{
   return equipo;
}
int MNadador::GetCtCompetencias()
{
   return ctcompetencias;
}
int MNadador::GetCtMedallas()
{
   return ctmedallas;
}
// El nadador va actualizando su contador de medallas
void MNadador::ProcesarCompetencia(MCompetencia compe)
{
   ++ctcompetencias;
   if (compe.GetLugar() < 4)
      ++ctmedallas;
}




