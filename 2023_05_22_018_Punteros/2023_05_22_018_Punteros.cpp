// Rodrigo Farías Andrés 
// Punteros
//

#include <iostream>
#include <locale>
#include <stdlib.h>
#include <cstdlib>
#include <Windows.h>
#include <string>
#include <string.h>
#include <locale.h>

int main()
{
    // Repaso de funciones
    system("pause");
    system("CLS");
    Sleep(100);
    
    //Punteros
    int Edad = 0;
    int* apuntador = &Edad;

    std::cout << "El valor de la edad: " << Edad << std::endl;
    std::cout << "El valor de la edad: " << apuntador << std::endl;
    std::cout << "El valor de la edad: " << *apuntador << std::endl;
    std::cout << "El valor de la edad: " << &apuntador << std::endl << std::endl;
    //Borrar apuntador
    apuntador = NULL;

    ///////////////////////////////////////////////////////////////////////////////////////

    
    srand(time(NULL));
    int N1 = 0;
    int posx = 0;
    int posy = 0;
    int mat[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout << "Ponle un numero en la posicion " << posx << "," << posy << std::endl;
            std::cin >> N1;
            mat[i][j] = (N1);
            posx = posx + 1;
            posy = posy + 1;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }

    /////////////////////////////////////////////////////////////////////////////////////////
    //Para crear arreglos dinámicos necesitamos memoria no estática
    //Esto se logra con punteros
    //Creamos la variable puntera y la inicializos en NULL
    std::string* titulos = NULL;
    std::string* autores = NULL;
    std::string libros[10]; //Memoria estática
    int size;
    std::cout << "Cuantas pelis quieres registrar?\n";
    std::cin >> size;
    //CrearArreglos dinámicos
    titulos = new std::string[size];
    autores = new std::string[size];

    //Recuerda siempre destruir la memoria dinámica
    
   
    //Ahora solicita la información
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            std::cin.ignore();
        }
        std::cout << "Titulo " << i << "\n";
        std::getline(std::cin, titulos[i]);
    }
    //Imprime la información
    for (int i = 0; i < size; i++)
    {

    }



    delete[] titulos;
    delete[] autores;
    titulos = NULL;
    autores = NULL;

}