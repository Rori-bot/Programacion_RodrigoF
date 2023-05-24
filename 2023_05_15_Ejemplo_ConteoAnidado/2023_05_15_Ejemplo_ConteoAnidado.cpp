// Rodrigo Farías Andrés
//

#include <iostream>
#include <string>

int main()
{
    //Realizar conteos anidados
    for (int i = 0; i < 10; i++) //Conteo Externo
    {
        std::cout << i << " ";
        for (int j = 0; j < 10; j++) //Conteo Interno
        {
            std::cout << j << "";
        }
        std::cout << std::endl;
    }

    std::string Titulo[5];
    std::string Autor[5];
    int Fecha[5];
    //Captura de datos


    std::cout << "\n\nBuenas tardecitas. Registra tu top 5 libros favoritos, sus autores y fechas de pubicacion porfavore:\n";

    for (int i = 0; i <= 4; i++)
    {
        std::cout << "Escribe el titulo del libro numero " << i+1 << std::endl;
        if (i > 0)
        {
            std::cin.ignore();
        }
        getline(std::cin, Titulo[i]);
        std::cout << "Escribe el nombre del autor numero " << i+1 << std::endl;
        getline(std::cin, Autor[i]);
        std::cout << "Escribe la fecha del libro (aaaammdd) numero " << i + 1 << std::endl;
        std::cin >> Fecha[i];
    }
    //Funcióon de muestreo de info
    std::cout << "Muy buenos gustos! Tus libros, autores y fechas fueron: \n";
    for (int j = 0; j <= 4; j++)
    {
        std::cout << j + 1 << ". " << Titulo[j] << ". Escrito por: " << Autor[j] << ". Publicado el: " << Fecha[j] << ".\n";
    }
}