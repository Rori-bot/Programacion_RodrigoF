// 2023_05_15_011_Anidados.cpp : 
// Mau Cabrera
// Ciclos y Decisiones anidadas

#include <iostream>
#include <string>

int main()
{
    std::string Titulo[5];
    std::string Autor[5];
    int Fecha[5];
    //Captura de datos
    std::cout << "Hola muy buenas tardes, favor de ingresar el nombre de su libro MENOS favorito:\n";
    for (int i = 0; i <= 4; i++)
    {
        std::cout << "Ingresa el titulo del libro feo ese número " << i + 1 << std::endl;
        if (i > 0)
        {
            std::cin.ignore();
        }
        getline(std::cin, Titulo[i]);
        std::cout << "Ingresa el autor del libro " << i + 1 << " siquieres"  << std::endl;
        getline(std::cin, Autor[i]);
        std::cout << "Ingresa La fecha de publicación del libro " << i + 1 << " en formato aaaammdd" << std::endl << std::endl;
        std::cin >> Fecha[i];
    }
    //Función de muestreo de la información
    std::cout << "Ya veo tus libros MENOS favoritos son:\n";
    for (int j = 0; j < 5; j++)
    {
        std::cout << j + 1 << ".-" <<
            Titulo[j] << "\nEl autor es: " << Autor[j] << "\nPublicado el dia " << Fecha[j] << std::endl;
    }
}

