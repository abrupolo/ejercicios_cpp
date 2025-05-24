// ejercicio7.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    int d, m, a;

    std:: cout << "Ingrese el dia (1-31): ";
    std:: cin >> d;
    std:: cout << "Ingrese el mes (1-12): ";
    std:: cin >> m;
    std:: cout << "Ingrese el año (1-9999): ";
    std:: cin >> a;

    if (d < 1 || d > 31 || m < 1 || m > 12 || a < 1 || a > 9999) {
        std:: cout << "Error: Fecha invalida.";
    }


    int fecha = a * 10000 + m * 100 + d;

    std:: cout << "La fecha en formato AAAAMMDD es: " << fecha;

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
