# Registro de Alumnos

Este proyecto es una aplicación de consola en C++ que permite gestionar un registro de alumnos. Las funcionalidades incluyen mostrar la lista de alumnos, mostrar las notas de los alumnos, modificar las notas y salir del programa.

## Estructura del Proyecto

El proyecto contiene los siguientes archivos:

- `main.cpp`: Archivo principal que contiene la lógica del programa.

## Funcionalidades

1. **Mostrar lista de alumnos**: Muestra la lista de alumnos registrados.
2. **Mostrar nota de alumnos**: Muestra las notas de los alumnos.
3. **Modificar nota**: Permite modificar la nota de un alumno específico.
4. **Salir**: Termina la ejecución del programa.

## Uso

Para compilar y ejecutar el programa, sigue los siguientes pasos:

1. Compila el archivo `main.cpp`:
    ```sh
    g++ main.cpp -o main.exe
    ```

2. Ejecuta el archivo compilado:
    ```sh
    ./main.exe
    ```

## Funciones Principales

- `void menu()`: Muestra el menú principal del programa.
- `void ingresar_opcion(int &op)`: Solicita al usuario que ingrese una opción del menú.
- `void mostrar_lista(string nombre[])`: Muestra la lista de alumnos.
- `void mostrar_nota(float nota[], string nombre[])`: Muestra las notas de los alumnos.
- `void modificar_nota(float nota[], string nombre[])`: Permite modificar la nota de un alumno específico.

## Ejemplo de Uso

Al ejecutar el programa, se mostrará el siguiente menú:

Registro de alumnos

1. Mostrar lista de alumnos
2. Mostrar nota de alumnos
3. Modificar nota
4. Salir


El usuario puede seleccionar una opción ingresando el número correspondiente y seguir las instrucciones en pantalla.

## Contribuciones

Las contribuciones son bienvenidas. Por favor, abre un issue o un pull request para discutir cualquier cambio que desees realizar.

## Licencia

Este proyecto está bajo la Licencia MIT.