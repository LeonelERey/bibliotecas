#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#define JUNIOR	 		    1
#define SEMISENIOR	 		2
#define  SENIOR 	 		3
#define ASIGNADO            1


typedef struct
{
  int IdProgramador;
  char nombre[30];
  char apellido[30];
  int estado;
  int idCategoria;
  char descripcion[30];
  float pagoXhora;

}eProgramador;

typedef struct
{
  int IdProyecto;
  char descripcion[30];
  int estado;

}eProyecto;



/** Despliega el menu de opciones.
 * \param no recibe ningun valor.
 * \return Retorna el valor de la opcion ingresada por el usuario.
 */

int Menu();

/** Inicializa el estado de todos los programadores en 0.
 * \param conjunto de estructuras a inicializar.
 */

void InicializarProgramadores(eProgramador[]);

/** Obtiene el indice de la primer posicion libre que encuentra.
 * \param  el array se pasa como parametro.
 * \param devuelve el indice de la posicion libre.
 */
int PosicionLibre(eProgramador[]);

/** Carga los datos de las personas al sistema.
 * \param personas el array se pasa como parametro.
 */

void altaProgramador(eProgramador programadores[]);

/** \brief Muestra los programadores cargados al sistema.
 * \param conjunto de estructuras usadas como parametro.
 */

void MostrarProgramadores(eProgramador programadores[]);

/** \brief Modifica los datos de un programador.
 * \param conjunto de estructuras usadas como parametro.
 */
void modificarProgramador(eProgramador programador[]);

/** \brief Da de baja a un programador cambiando el estado a 0.
 * \param conjunto de estructuras usadas como parametro.
 */

void bajaProgramador(eProgramador programador[]);

/** \brief Asigna un proyecto a un programador.
 * \param 1er conjunto de estructuras usadas como parametro.
 * \param 2da conjunto de estructuras usadas como parametro.
 */

void AsignarProgramador(eProgramador programadores[], eProyecto proyectos[]);

/** Obtiene el indice que coincide con el id pasado por parametro.
 * \param  el array se pasa como parametro.
 * \param  el id es buscado en el array.
 * \return Retorna el indice en donde se encuentra el elemento con el parametro id.
 */
int buscarPorId(eProgramador programadores[], int id);
void inicializarProyecto(eProyecto proyectos[]);
void listadoDeProgramadores(eProgramador programadores[], eProyecto proyectos[]);

















#endif // FUNCIONES_H_INCLUDED


