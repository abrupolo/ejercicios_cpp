// ejercicio6.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    std:: string numero;

    std:: cout << "Ingrese un numero entero de 5 digitos: ";
    std:: cin >> numero;

   
    if (numero.length() == 5 && isdigit(numero[0]) && isdigit(numero[1]) &&
        isdigit(numero[2]) && isdigit(numero[3]) && isdigit(numero[4])) {

        std:: cout << "Digitos del numero:";
        for (int i = 0; i < 5; ++i) {
            std:: cout << numero[i];
        }

    }
    else {
        std:: cout << "el numero debe ser exactamente de 5 digitos.";
    }

    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
