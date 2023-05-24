//Rodrigo Farías Andrés
//

#include <iostream>
#include <string.h>
#include <string>

int main()
{
    //Para crear arreglos dinámicos necesitamos memoria no estática
    //Esto se logra con punteros
    //Creamos la variable puntera y la inicializos en NULL
    std::string* titulos = NULL;
    std::string* autores = NULL;
    std::string libros[10]; //Memoria estática
    int size;
    std::cout << "Buenas tardes, este programa le ayudara a almacenar peliculas y sus autores.\n";
    std::cout << "Cuantas pelis quieres registrar?\n";
    std::cin >> size;

    //CrearArreglos dinámicos
    titulos = new std::string[size];
    autores = new std::string[size];

    //Ahora solicita la información
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            std::cin.ignore();
        }
        std::cout << "Dime el nombre de la pelicula numero " << i + 1 << "\n";
        std::getline(std::cin, titulos[i]);
        std::cout << "Dime el nombre del autor de la pelicula numero " << i + 1 << "\n";
        std::getline(std::cin, autores[i]);
    }
    std::cout << "\n";

    //Imprime la información
    for (int i = 0; i < size; i++)
    {
        std::cout << "El nombre de la pelicula numero " << i + 1 << " es: " << titulos[i] << "\n";
        std::cout << "El nombre del autor de la  pelicula numero " << i + 1 << " es: " << autores[i] << "\n\n";
    }

    //Recuerda siempre destruir la memoria dinámica
    delete[] titulos;
    delete[] autores;
    titulos = NULL;
    autores = NULL;
}
