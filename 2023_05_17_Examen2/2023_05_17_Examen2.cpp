// Rodrigo Farías Andrés
//

#include <iostream>

int main()
{
    int fiebre = 0;
    int tos = 0;
    int resp = 0;
    int suma = 0;

    std::cout << "En este programa se te harán recomendaciones en base a tus respuestas.\n";
    std::cout << "Tiene fiebre? 0.No 1.Si\n";
    std::cin >> fiebre;
    std::cout << "Tiene tos seca? 0.No 1.Si\n";
    std::cin >> tos;
    std::cout << "Tiene dificultades para respirar? 0.No 1.Si\n";
    std::cin >> resp;

    suma = fiebre + tos + resp;

    if (suma == 3)
    {
        std::cout << "Vayase al hospital.\n";
    }
    else
    {
        if (suma == 2)
        {
            std::cout << "Quedese en casita.\n";
        }
        else
        {
            if (suma == 1)
            {
                std::cout << "Tal vez solo sea gripilla.\n";
            }
            else
            {
                std::cout << "Usted esta sanito.";
            }
        }
    }
        
}