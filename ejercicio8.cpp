// ejercicio8.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    int fecha;

    std:: cout << "Ingrese un numero de 8 digitos en formato AAAAMMDD: ";
    std:: cin >> fecha;

    
    if (fecha < 10000000 || fecha > 99999999) {
        std:: cout << "El numero debe tener exactamente 8 digitos.";
    }

    
    int a = fecha / 10000;          
    int m = (fecha / 100) % 100;     
    int d = fecha % 100;             

    std:: cout << "Año: " << a;
    std:: cout << "Mes: " << m;
    std:: cout << "Dia: " << d;

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
