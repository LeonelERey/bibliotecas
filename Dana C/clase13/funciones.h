
typedef struct
{
  int IdAutor;
  char nombre[30];
  char apellido[30];
  int estado;

}eAutor;

typedef struct
{
  int codLibro, estado;
  char titulo[30];
  int codAutor;
  int stock;

}eLibro;

void inicializarEstado(eLibro[],int);
void altaLibro(eLibro[], int);
void modificarLibro(eLibro[], int);
void inicializarEstAut(eAutor[],int);
void bajaLibro(eLibro[], int);
void mostrarLibros(eLibro[], int);
void ordenarLibros(eLibro[], int);
void mostrarAutores(eAutor[], int);
void listarLibros(eLibro[], eAutor[],int,int);
