/*
 *  Principal.cpp
 *  Creado: 15/10/2011
 *  Autor: Prof. Luis Pereira
 *  Ajustado: 19/03/2012
La Federaci�n de nataci�n del Estado Lara, una vez al a�o organiza unas competencias
en donde intervienen nadadores que pertenecen al equipo de tres prestigiosas Instituciones
Educativas.
Es necesario chequear la actuaci�n que tendr� cada nadador y esto se logra al finalizar las
competencias ya que se tendr� el resultado de la cantidad de medallas que se lleva cada uno.
La Federaci�n dio a conocer que los estilos a nadar para las competencias son 4 y se
presentan a continuaci�n:
(1) Mariposa, (2) Espalda, (3) Pecho y (4) Libre.
Es importante resaltar que un nadador puede participar en m�s de una competencia, pero de estilos
diferentes, por lo tanto, puede participar en un m�ximo de cuatro competencias.
Al llegar el equipo, el cual se identifica con un nro. (valor del 1 al 3), deben inscribirse sus
nadadores, por lo tanto, cada uno entrega su c�dula laminada y de all� se toman los datos del
nro. de la c�dula y el nombre.
Adem�s, como un nadador puede participar en varias competencias (no se sabe con antelaci�n en
cuantas, m�ximo cuatro) por cada una, se deber� indicar: cu�l es el estilo (nro. del 1 al 4),
que tiempo realiz� (en segundos) y en qu� lugar lleg�.
Se estipula, que si lleg� de primero recibe medalla de oro, de segundo medalla de plata,
de tercero medalla de bronce,  de cuarto en adelante no tiene medalla.
Evidentemente el nadador pertenece a un equipo, por lo tanto el dato n�mero del equipo,
es un dato que complementa la informaci�n del nadador.
En particular, la federaci�n necesita hacer una evaluaci�n del equipo nro. 2, por lo tanto,
necesita que  le informen el porcentaje de medallas de oro que obtuvo ese equipo, en relaci�n
al total de medallas de oro entregadas entre todos los equipos.
En lo que respecta al equipo nro. 1, se necesita conocer cu�l es el porcentaje de nadadores que
tiene  ese equipo en relaci�n al total de nadadores que participaron en las competencias.
Finalmente la Federaci�n indica, que para ella es importante que se determine cuantos nadadores
participaron en las competencias del estilo mariposa.*/

#include "Controlador.h"

int main()
{
   Controlador c;
   c.ProcesarJornadaNatacion();
   c.ReporteFederacion();
   return 0;
}




