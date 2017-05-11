
typedef struct{

int codProd;
int estado;
char descripcion[20];
float importe;
int cantidad;

}eProducto;

void inicializarEstado(eProducto[], int);
void altaProducto(eProducto[], int);
void mostrarProducto(eProducto[], int);
void modificarProducto(eProducto[], int);
void eliminarProducto(eProducto producto[], int tam);
void ordenarProductos(eProducto producto[], int tam);
