/* Mostrar un menu que muestre de forma repetitiva lo siguiente
 - Mostar en pantalla el nombre de los alumnos
 - Mostra la nota de un alumno especifico
 - Modificar la nota pidiendo el nombre
*/

#include <iostream>
using namespace std;

void menu();
void ingresar_opcion(int &op);

int main() {

  string lista_alumnos[5] = {"Pedro", "Juan", "Arturo", "Alisson"};
  float nota[5] = {8.5, 9.2, 5, 10 };

  menu();
  int a;
  ingresar_opcion(a);
  cout <<"\t"<< a;

  return 0;
}

void menu() {
  cout<<"\tMenu: \n"<<endl;
  cout<<"\t1. Lista de alumnos"<<endl;
  cout<<"\t2. Mostrar nota de alumnos"<<endl;
  cout<<"\t3. Modificar nota"<<endl;
  cout<<"\t4. Salir"<<endl;
}

void ingresar_opcion(int &op) {
  cout<<"\n\tElija una opcion: ";
  cin >>op;
}