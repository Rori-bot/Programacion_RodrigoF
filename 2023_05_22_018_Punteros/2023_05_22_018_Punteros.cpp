// Rodrigo Farías Andrés 
// Punteros

#include <iostream>
#include <locale>
#include <stdlib.h>
#include <cstdlib>
#include <Windows.h>
#include <string>
#include <string.h>
#include <locale.h>
#include <random>

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "es_MX.UTF-8");

    int MATRICES;
    int mat1[3][3];
    int mat2[5][5];
    int mat3[10][10];

    std::cout << "Buenas tardes, este programa te dará una matriz del tamaño deseado.\nLas siguientes opciones son: \n1. Matriz 3x3\n2. Matriz 5x5\n3. Matriz 10x10\n";
    std::cout << std::endl;
    std::cin >> MATRICES;
    std::cout << std::endl;

    switch (MATRICES)
    {
    case 1:
        std::cout << "Tenga su matriz de 3x3, jovenazo.\n\n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                mat1[i][j] = rand() % 10;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                std::cout << mat1[i][j] << " ";
            }
            std::cout << std::endl;
        }
        break;

    case 2:
        std::cout << "Tenga su matriz de 5x5, jovenazo.\n\n";
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                mat2[i][j] = rand() % 10;
            }
        }
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                std::cout << mat2[i][j] << " ";
            }
            std::cout << std::endl;
        }
        break;

    case 3:
        std::cout << "Tenga su matriz de 10x10, jovenazo.\n\n";
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                mat3[i][j] = rand() % 10;
            }
        }
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                std::cout << mat3[i][j] << " ";
            }
            std::cout << std::endl;
        }
        break;

    default:
        std::cout << "De esas no hay, joven.\n";
    }
    std::cout << "\nGracias por utilizar mi programa :)\n";
}