/*
 *  Controlador.cpp
 *  Creado: 15/10/2011
 *  Autor: Prof. Luis Pereira
 *  Ajustado: 19/03/2012
 */
#include "Controlador.h"
Controlador::Controlador() {}

// Permite procesar las competencias que se realizaron en las jornadas
void Controlador::ProcesarJornadaNatacion()
{
   MCompetencia mcompe;
   MNadador mnada;             // Relacion Agregacion con las clases
   VCompetencia vcompe;        // MCompetencia, MNadador,
   VNadador vnada;             // VCompetencia, VNadador,
   string ced,nom;
   int eq,est,lug,resp;
   float tiem;
   
   //ciclo para procesar varios nadadores
   do
   {
      system("cls");
      cout << "DATOS DEL NADADOR" << endl;
      cout << "=================" << endl;
      /* Se solicita  al objeto de la clase
      VNadador que proceda a leer cada dato del nadador */
      ced = vnada.LeerCedula();
      nom = vnada.LeerNombre();
      eq = vnada.LeerEquipo();
      /* Se le da estado al objeto de la clase mnada. El contador de  medallas del
      nadador (atributo ctnadador) debe comenzar en cero*/
      mnada.SetCedula(ced);       // se llenan los atributos con los dato leidos
      mnada.SetNombre(nom);       // por la vista vnada
      mnada.SetEquipo(eq);
      mnada.SetCtCompetencias(0);  // atributos inicializados en cero
      mnada.SetCtMedallas(0);      // se iran actualizando a medida que se
                                   // procesen las competencias


      //ciclo para procesar las competencias en las que participo el nadador
      cout << endl << endl << "DATOS DE COMPETENCIAS" << endl;
      cout << "=====================" << endl << endl;
      do
      {
         //Se solicita  al objeto de la clase VCompetencia para que lea el dato estilo de la competencia
         est = vcompe.LeerEstilo();
         //Se solicita  al objeto de la clase VCompetencia el tiempo en seg que realizo el nadador
         // en la competencia
         tiem = vcompe.LeerTiempo();
         //Se solicita  al objeto de la clase VCompetencia para que lea el dato lugar en el que
         // llego el nadador
         lug = vcompe.LeerLugar();

         //Se le da estado al objeto de la clase MCompetencia
         mcompe.SetEstilo(est);
         mcompe.SetTiempo(tiem);
         mcompe.SetLugar(lug);
         mnada.ProcesarCompetencia(mcompe); /* metodo encargado de actualizar el atributo ctmedallas del nadador
                                              (Relacion de uso MNadador con MCompetencia) */
         mfedera.ProcesarCompetenciaDelNadador(mnada,mcompe); /* metodo encargado de actualizar los atributos:
                                                     	 	  ctmariposa, ctotalmedallas y cteq2oro
                                                  	  	  	  (Relacion de uso MFederacion con MNadador y
                                                   	   	   	   MFederacion con MCompetencia) */
         if (mnada.GetCtCompetencias() < 4)
            {
        	  cout << "\n Hay otra competencia donde participo el nadador? [1]SI [2]No : ";
              cin >> resp;
            }
         else
            {
        	  cout << "\n\n El nadador ya compitio en todos los estilos \n\n";
        	  system("pause");
        	  resp = 2;
            }
      }
      while (resp == 1);
      mfedera.ProcesarNadador(mnada);/* metodo encargado de actualizar los atributos:
                                        ctnadador y cteq1
                                       (Relacion de uso MFederacion con MNadador) */
      // Se imprime la salida del nadador
      vnada.ImprimirNadador(mnada.GetCedula(),mnada.GetNombre(),mnada.GetCtMedallas());
      cout << "\n\n Hay otro nadador? [1]SI [2]No : ";
      cin >> resp;
   }
   while (resp == 1);
}


void Controlador::ReporteFederacion()
{

	VFederacion  vfedera;  	// relación de agregación con VFederacion

    /* Se solicita al objeto de la clase MFederacion la información
    requerida y esta se envía por parámetros al método del objeto de
    la clase VFederacion para que la imprima */
	vfedera.ImprimirResultadosJornadas(mfedera.PorcentajeOroEq2(),
			                           mfedera.GetCtMariposa(),
			                           mfedera.PorcentajeNadaEq1());
}
