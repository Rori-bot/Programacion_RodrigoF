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
            std::cout << "¿Le hace daño super efectivo al tipo 'Acero'?\n";
            std::cin >> resp;

            if (resp == 1)
            {
                std::cout << "Estás pensando en el tipo 'Lucha'.\n";

            }
            else 
            {
                std::cout << "Estás pensando en el tipo 'Normal'.\n";
            }

        }
        else
        {
            resp = 0;
            std::cout << "¿Tiene dos inmunidades?\n";
            std::cin >> resp;
            
            if (resp == 1)
            {
                std::cout << "Estás pensando en el tipo 'Fantasma'. ¡Mi favorito! :D\n";
            }
            else
            {
                resp = 0;
                std::cout << "¿El tipo 'Lucha' le hace daño super efectivo?\n";
                std::cin >> resp;

                if (resp == 1)
                {
                    resp = 0;
                    std::cout << "¿El tipo 'Fuego' le hace daño super efectivo?\n";
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
                    std::cout << "¿Le hace daño super efectivo al tipo 'Acero'?\n";
                    std::cin >> resp;

                    if (resp == 1)
                    {
                        std::cout << "Estás pensando en el tipo 'Tierra'.\n";
                    }
                    else
                    {
                        resp = 0;
                        std::cout << "¿Le hace daño super efectivo al tipo 'Dragón'?\n";
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
                    std::cout << "¿El tipo 'Eléctrico' le hace daño super efectivo?\n";
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
            else
            {
                resp = 0;
                std::cout << "¿Es super efectivo contra sí mismo?\n";
                std::cin >> resp;

                if (resp == 1)
                {
                    std::cout << "Estás pesando en el tipo 'Dragón'.\n";
                }
                else
                {
                    std::cout << "Estás pensando en el tipo 'Psíquico'.\n";
                }
            }  
        }
        else
        {
            resp = 0;
            std::cout << "¿El tipo 'Acero' le hace daño super efectivo?\n";
            std::cin >> resp;

            if (resp == 1)
            {
                resp = 0;
                std::cout << "¿El tipo 'Agua' le hace daño super efectivo?\n";
                std::cin >> resp;

                if (resp == 1)
                {
                    std::cout << "Estás pensando en el tipo 'Roca'.\n";
                }
                else
                {
                    std::cout << "Estás pensando en el tipo 'Hielo'.\n";
                }
            }
            else
            {
                resp = 0;
                std::cout << "¿El tipo 'Tierra' le hace daño super efectivo?\n";
                std::cin >> resp;

                if (resp == 1)
                {
                    resp = 0;
                    std::cout << "¿El tipo 'Psíquico' le hace daño super efectivo?\n";
                    std::cin >> resp;

                    if (resp == 1)
                    {
                        std::cout << "Estás pensando en el tipo 'Veneno'.\n";
                    }
                    else
                    {
                        std::cout << "Estás pensando en el tipo 'Eléctrico'.\n";
                    }
                }
                else
                {
                    std::cout << "Estás pensando en el tipo 'Bicho'.\n";
                }
            }
        }
    }
}


