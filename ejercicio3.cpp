// ejercicio3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

// ejercicio3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.  
//  

#include <iostream>  

int main()  
{  
    int N=0;
    int n=0;
    int num=0; 

   std::cout << "Ingrese un numero: ";  
   std::cin >> N;  
   std::cout << "Ingrese otro numero: ";  
   std::cin >> n;  
   std::cout << "Ingrese otro numero: ";  
   std::cin >> num;  

   int suma = N + n + num;  
   int promedio = (N + n + num) / 3;  
   int producto = N * n * num;  

   if (N > n && N > num) {  
       std::cout << "El mayor es: " << N << std::endl;  
   }  
   else if (n > N && n > num) {  
       std::cout << "El mayor es: " << n << std::endl;  
   }  
   else {  
       std::cout << "El mayor es: " << num << std::endl;  
   }   

   if (N < n && N < num) {
       std::cout << "El menor es: " << N << std::endl;
   }
   else if (n < N && n < num) {
       std::cout << "El menor es: " << n << std::endl;
   }
   else {
       std::cout << "El menor es: " << num << std::endl;
   }
   std::cout << "La suma es: " << suma << std::endl;  
   std::cout << "El promedio es: " << promedio << std::endl;  
   std::cout << "El producto es: " << producto << std::endl;  

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
