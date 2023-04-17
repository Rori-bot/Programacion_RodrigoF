// 2023_04_17_006.Bucles.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Práctica 7
// Hacer un programa que te solicite el número de peleadores en una arena y te de el número de batallas que se tendrán para otener a un ganador.
// 1. Royal Rumble
// 2. Eliminatoria directa
// 3. Grupos, semifinal y final

#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");

    int tipo = 0;
    int peleadores = 0;
    int peleas = 0;

    std::cout << "Buenas tardes. Este programa te ayudará a saber cuántas peleas son necesarias para determinar el ganador. Primero indica el número de peleadores en la arena (10 o menos):" << std::endl;
    std::cin >> peleadores;
    std::cout << "Perfecto. Ahora indica qué tipo de pelea se llevará a cabo:" << std::endl;
    std::cout << "1. Royal Rumble   2. Eliminatoria directa   3. Grupos, semifinal y final" << std::endl;

    std::cin >> tipo;
    switch (tipo)
    {
    case 1:
        std::cout << "Has elegido Royal Rumble." << std::endl;
        for (int i=0; i<peleadores;i++)
        {
            peleas +=i; 
           
        }
        std::cout << "Número de peleas: " << peleas << "." << std::endl;
        break;

    case 2:



    
    default: 
        std::cout << "No hay de esas." << std::endl;

    }
    
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
