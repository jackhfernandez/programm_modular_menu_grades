/* Mostrar un menu que muestre de forma repetitiva lo siguiente
 - Mostar en pantalla el nombre de los alumnos
 - Mostra la nota de un alumno especifico
 - Modificar la nota pidiendo el nombre
*/

#include <iostream>
using namespace std;

void menu();
void ingresar_opcion(int &op);
void mostrar_lista(string nombre[]);
void mostrar_nota(float nota[], string nombre[]);
void modificar_nota(float nota[], string nombre[]);

int main() {

  string lista_alumnos[5] = {"Pedro", "Juan", "Arturo", "Alisson"};
  float nota[5] = {8.5, 9.2, 5, 10 }; int a; int salida=1;

do {
  menu();
  ingresar_opcion(a);
  
  switch (a) {
    case 1: mostrar_lista(lista_alumnos); break;
    case 2: mostrar_nota(nota, lista_alumnos); break;
    case 3: modificar_nota(nota, lista_alumnos); break;
    case 4: salida = 0; break;
    default : cout<<"\n\tOpcion no valida!!!"; break;
  }
} while (salida);

  return 0;
}

void menu() {
  cout<<"\n\tRegistro de alumnos\n"<<endl;
  cout<<"\t1. Mostrar lista de alumnos"<<endl;
  cout<<"\t2. Mostrar nota de alumnos"<<endl;
  cout<<"\t3. Modificar nota"<<endl;
  cout<<"\t4. Salir"<<endl;
}

void ingresar_opcion(int &op) {
  cout<<"\n\tElija una opcion (1-4): ";
  cin >>op;
}

void mostrar_lista(string nombre[]) {
  cout<<"\n\tLista de alumnos"<<endl;
  for (int i=0; i<4; i++) {
    cout<<"\t"<<(i+1)<<".- "<<nombre[i]<<endl;
  }
}

void mostrar_nota(float nota[], string nombre[]) {
  cout<<"\n\tBoleta de notas"<<endl;
  for (int i=0; i<4; i++) {
    cout<<"\t"<<(i+1)<<".- "<<nombre[i]<<" --> "<<nota[i]<<endl;
  }
}

void modificar_nota(float nota[], string nombre[]) {
  cout<<"\n\tModificar notas"<<endl;
  cout<<"\tNombre del alumno a modificar la nota: ";
  string nombre_ingresado;
  cin >> nombre_ingresado;

  int i; int m=0; // i para iterar; m para romper el bucle for
  for (i=0; (i<4) && (m==0); i++)
    if (nombre[i] == nombre_ingresado) { m=1;}
  
  if (m==0) { cout<<"\n\tAlumno no encontrado"<<endl; }
  else {
    cout<<"\n\tVa a modificar la nota de "<<nombre_ingresado<<endl;
    cout<<"\n\tIngrese la  nueva nota para "<<nombre_ingresado<<": ";
    cin >>nota[i-1];
    cout<<"\n\tNota registrada exitosamente!"<<endl;
  }
}