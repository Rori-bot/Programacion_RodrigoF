// 2023_04_24_011_Adivinar.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Rodrigo Farías Andrés

#include <iostream>
#include <locale.h>
#include <string>

int main()
{
    int inmu = 0;
    bool resp = 0;


    setlocale(LC_ALL, "es_MX.UTF-8");
    std::cout << "Buenas tardes. En este programa se adivinará en qué tipo de Pokémon piensas. \nPiensa en un tipo y responde (1.Sí 0.No): \n";
    std::cout << "¿El tipo en el que piensas tiene alguna inmunidad?\n";
    std::cin >> resp;

    if (resp == 1)
    {
        resp = 0;
        std::cout << "¿Es inmune al tipo 'Fantasma'?\n";
        std::cin >> resp;

        if (resp == 1)
        {
            resp = 0;
            std::cout << "¿Es super efectivo contra el tipo 'Acero'?\n";
            std::cin >> resp;

            if (resp == 1)
            {
                std::cout << "Estás pensando en el tipo 'Lucha'.\n";

            }
            else 
            {
                std::cout << "Estás pensando en el tipo 'Normal'\n";
            }

        }
        else
        {
            resp = 0;
            std::cout << "¿Tiene dos inmunidades?\n";
            std::cin >> resp;
            
            if (resp == 1)
            {
                std::cout << "Estás pensando en el tipo 'Fantasma.\n";
            }
            else
            {
                resp = 0;
                std::cout << "¿El tipo 'Lucha' le es super efectivo?\n";
                std::cin >> resp;

                if (resp == 1)
                {
                    resp = 0;
                    std::cout << "¿El tipo 'Fuego' le es super efectivo?\n";
                    std::cin >> resp;

                    if (resp == 1)
                    {
                        std::cout << "Estás pensando en el tipo 'Acero'.\n";
                    }
                    else
                    {
                        std::cout << "Estás pensando en el tipo 'Siniestro'.\n";
                    }
                }
                else
                {
                    resp = 0;
                    std::cout << "¿Es super efectivo contra el tipo 'Acero'?\n";
                    std::cin >> resp;

                    if (resp == 1)
                    {
                        std::cout << "Estás pensando en el tipo 'Tierra'.\n";
                    }
                    else
                    {
                        resp = 0;
                        std::cout << "¿Es super efectivo contra el tipo 'Dragón'?\n";
                        std::cin >> resp;

                        if (resp == 1)
                        {
                            std::cout << "Estás pensando en el tipo 'Hada'.\n";
                        }
                        else
                        {
                            std::cout << "Estás pensando en el tipo 'Volador'.\n";
                        }
                    }
                }
            }
        }
             
    }
    else
    {
        resp = 0;
        std::cout << "El tipo aparece en algún Pokémon inicial? (Evoluciones y Megaevoluciones cuentan)\n";
        std::cin >> resp;

        if (resp == 1)
        {
            resp = 0;
            std::cout << "¿El tipo es uno de los 3 tipos primarios?\n";
            std::cin >> resp;

            if (resp == 1)
            {
                resp = 0;
                std::cout << "¿El tipo 'Tierra' le hace daño super efectivo?\n";
                std::cin >> resp;

                if (resp == 1)
                {
                    std::cout << "Estás pensando en el tipo 'Fuego'.\n";
                }
                else
                {
                    resp = 0;
                    std::cout << "¿El tipo 'Electrico' le hace daño super efectivo?\n";
                    std::cin >> resp;

                    if (resp == 1)
                    {
                        std::cout << "Estás pensando en el tipo 'Agua'.\n";
                    }
                    else
                    {
                        std::cout << "Estás pensando en el tipo 'Planta'.\n";
                    }
                }
            }
        }
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
