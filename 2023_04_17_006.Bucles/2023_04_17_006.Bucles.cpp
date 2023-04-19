// 2023_04_17_006.Bucles.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Práctica 7
// Hacer un programa que te solicite el número de peleadores en una arena y te de el número de batallas que se tendrán para otener a un ganador.
// 1. Royal Rumble
// 2. Eliminatoria directa
// 3. Grupos, semifinal y final
//Rodrigo Farías Andrés
//Veremos estrcturas de control
//Decisiones
//Bucles
//

#include <iostream>
#include <locale.h>
#include <string>


int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");

    int tipo = 0;
    int peleadores = 0;
    int peleas = 0;

    std::cout << "Buenas tardes. Este programa te ayudará a saber cuántas peleas son necesarias para determinar el ganador." << std::endl;
    std::cout << "Perfecto. Ahora indica qué tipo de pelea se llevará a cabo:" << std::endl;
    std::cout << "1. Royal Rumble   2. Eliminatoria directa   3. Grupos, semifinal y final" << std::endl;

    std::cin >> tipo;
    switch (tipo)
    {
    case 1:
        std::cout << "Has elegido Royal Rumble. Indica el número de peleadores en la arena (10 o menos):" << std::endl;
        std::cin >> peleadores;
        for (int i = 0; i < peleadores; i++)
        {
            peleas += i;

        }
        std::cout << "Número de peleas: " << peleas << "." << std::endl;
        break;

    case 2:
        std::cout << "Has elegido Eliminatoria Directa. Indica el número de peleadores en la arena (2, 4, 8, 16, 32):" << std::endl;
        std::cin >> peleadores;
        peleas = peleadores - 1;
        std::cout << "Número de peleas: " << peleas << "." << std::endl;
        break;

    case 3: 
        std::cout << "Has elegido Grupos, semifinal y final. Indica el número de peleadores en la arena (8, 16, 24, 32):" << std::endl;
        std::cin >> peleadores;
        for (int i = 0; i < peleadores; i++)
        {
            peleas += i;

        }
        peleas = peleas + 3;
        std::cout << "Número de peleas: " << peleas << "." << std::endl;
        break;

    default:
        std::cout << "No hay de esas." << std::endl;
        break;

    }

}