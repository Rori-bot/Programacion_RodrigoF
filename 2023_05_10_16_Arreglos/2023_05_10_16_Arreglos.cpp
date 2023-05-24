// Rodrigo Farías Andrés 
// Práctica arreglos

#include <iostream>
#include <locale.h>
#include <string>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    //Nombres personajes db
    std::string nombre[5] = { "kakaraoto", "vegetal", "pocolo daimaku", "bills", "célula" };
    std::string procedencia[5] = { "SayaHumano", "Sayayin", "Namekianon", "Dios de la destrución", "Androide" };

    int ki[5] = { 1,2,3,4,5 };
    for (int i = 0; i <= 4; i++)
    {
        std::cout << "Nombre del personaje " << i << ": " << nombre[i] << std::endl;
    }
    std::cout << std::endl;

    //Nombres de gente
    //Edades
    std::string nombres[5];
    std::string edad[5];
    for (int j = 0; j <= 4; j++)
    {
        std::cout << "Buenos días. Dígame su nombre porfavor." << std::endl;
        getline(std::cin, nombres[j]);
        std::cout << "Ahora tu edad." << std::endl;
        getline(std::cin, edad[j]);
        std::cout << "Bienvenidos: " << nombres[j] << "." << std::endl;

    }
}

