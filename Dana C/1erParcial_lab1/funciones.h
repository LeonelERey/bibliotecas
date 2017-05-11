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

}eProyecto;

/*
typedef struct
{
  int codLibro, estado;
  char titulo[30];
  int codAutor;
  int stock;

}eLibro;

*/

/** Despliega el menu de opciones.
 * \param no recibe ningun valor.
 * \return Retorna el valor de la opcion ingresada por el usuario.
 */
int menu();

/** Inicializa el estado de los libros en 0.
 * \param el array como parametro.
 * \param el tamaño del array
 * \return Retorna el valor de la opción ingresada por el usuario.
 */
void inicializarEstado(eProgramador[],int);

/** Da de alta a un libro.
 * \param el array como parametro.
 * \param el tamaño del array
 * \return no retorna ningún valor.
 */
void altaProgramador(eProgramador[], int);

/** Modifica un libro.
 * \param el array como parametro.
 * \param el tamaño del array
 * \return no retorna ningún valor.
 */

//void modificarLibro(eLibro[], int);

/** Inicializa el estado de los autores en 0.
 * \param el array como parametro.
 * \param el tamaño del array
 * \return no retorna ningún valor.
 */
/*void inicializarEstAut(eAutor[],int);
void bajaLibro(eLibro[], int);
void mostrarLibros(eLibro[], int);
void ordenarLibros(eLibro[], int);
void mostrarAutores(eAutor[], int);
*/
/** Busca un autor por su ID.
 * \param el array como parametro.
 * \param el id del autor como parametro
 * \return retorna el indice si coincide el ID o -1 si no coincide .
 */
//int buscarAutorXId(eAutor autores[], int idAutor);

//void listarLibros(eLibro[], eAutor[],int,int);

