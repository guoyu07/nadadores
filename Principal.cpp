/*
 *  Principal.cpp
 *  Creado: 15/10/2011
 *  Autor: Prof. Luis Pereira
 *  Ajustado: 19/03/2012
La Federación de natación del Estado Lara, una vez al año organiza unas competencias
en donde intervienen nadadores que pertenecen al equipo de tres prestigiosas Instituciones
Educativas.
Es necesario chequear la actuación que tendrá cada nadador y esto se logra al finalizar las
competencias ya que se tendrá el resultado de la cantidad de medallas que se lleva cada uno.
La Federación dio a conocer que los estilos a nadar para las competencias son 4 y se
presentan a continuación:
(1) Mariposa, (2) Espalda, (3) Pecho y (4) Libre.
Es importante resaltar que un nadador puede participar en más de una competencia, pero de estilos
diferentes, por lo tanto, puede participar en un máximo de cuatro competencias.
Al llegar el equipo, el cual se identifica con un nro. (valor del 1 al 3), deben inscribirse sus
nadadores, por lo tanto, cada uno entrega su cédula laminada y de allí se toman los datos del
nro. de la cédula y el nombre.
Además, como un nadador puede participar en varias competencias (no se sabe con antelación en
cuantas, máximo cuatro) por cada una, se deberá indicar: cuál es el estilo (nro. del 1 al 4),
que tiempo realizó (en segundos) y en qué lugar llegó.
Se estipula, que si llegó de primero recibe medalla de oro, de segundo medalla de plata,
de tercero medalla de bronce,  de cuarto en adelante no tiene medalla.
Evidentemente el nadador pertenece a un equipo, por lo tanto el dato número del equipo,
es un dato que complementa la información del nadador.
En particular, la federación necesita hacer una evaluación del equipo nro. 2, por lo tanto,
necesita que  le informen el porcentaje de medallas de oro que obtuvo ese equipo, en relación
al total de medallas de oro entregadas entre todos los equipos.
En lo que respecta al equipo nro. 1, se necesita conocer cuál es el porcentaje de nadadores que
tiene  ese equipo en relación al total de nadadores que participaron en las competencias.
Finalmente la Federación indica, que para ella es importante que se determine cuantos nadadores
participaron en las competencias del estilo mariposa.*/

#include "Controlador.h"

int main()
{
   Controlador c;
   c.ProcesarJornadaNatacion();
   c.ReporteFederacion();
   return 0;
}




