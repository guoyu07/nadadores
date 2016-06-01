/*
 * MFederacion.cpp
 *  Creado: 15/10/2011
 *  Autor: Prof. Luis Pereira
 *  Ajustado: 19/03/2012
 */
#include "MFederacion.h"

// Constructor que inicializa los atributos en cero
MFederacion :: MFederacion()
{
	ctnadador = 0;
	cteq2oro = 0;
	ctmariposa = 0;
	cteq1 = 0;
	ctotalmedallasoro = 0;
}

void MFederacion :: SetCtNadador(int c1)
{
	ctnadador = c1;
}
void MFederacion :: SetCtEq2Oro(int c2)
{
	 cteq2oro = c2;
}
void MFederacion :: SetCtMariposa(int c3)
{
	ctmariposa = c3;
}
void MFederacion :: SetCtEq1(int c4)
{
	cteq1 = c4;
}
void MFederacion :: SetCtotalMedallas(int c5)
{
	ctotalmedallasoro = c5;
}
int MFederacion :: GetCtNadador()
{
	return ctnadador;
}
int MFederacion :: GetCtEq2Oro()
{
	return cteq2oro;
}
int MFederacion :: GetCtMariposa()
{
	return ctmariposa;
}
int MFederacion :: GetCtEq1()
{
	return cteq1;
}
int MFederacion :: GetCtotalMedallas()
{
	return ctotalmedallasoro;
}
/* Actualiza los atributos ctmariposa, ctotalmedallas y cteq2oro
    Relación de uso con MNadador y MCompetencia  */
void MFederacion :: ProcesarCompetenciaDelNadador(MNadador nada, MCompetencia compe) // Relacion uso con MNadador y MCompetencia
{
   if (compe.GetEstilo()== 1)
	   ++ctmariposa;
   if (compe.GetLugar() == 1)
	   ++ctotalmedallasoro;
   if (nada.GetEquipo()==2 and compe.GetLugar() == 1)
	   ++cteq2oro;
}
// Actualiza los atributos ctnadador y cteq1. Relación uso con MNadador
void MFederacion :: ProcesarNadador(MNadador nada) 
{
   ++ctnadador;
   if (nada.GetEquipo()==1)
	  ++cteq1;
}
// Porcentaje de medallas de oro que ganó el equipo nro. 2.
float MFederacion :: PorcentajeOroEq2()
{
	if (ctotalmedallasoro > 0)
       return cteq2oro * 100 / ctotalmedallasoro;
	return 0;
}
// Porcentaje de nadadores que tiene el equipo nro. 1
float MFederacion :: PorcentajeNadaEq1()
{
	if (ctnadador > 0)
       return cteq1 * 100 / ctnadador;
	return 0;
}
