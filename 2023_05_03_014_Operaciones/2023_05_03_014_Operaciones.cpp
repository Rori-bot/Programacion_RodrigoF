// Rodrigo Farías Andrés
// En este programa contaremos de 1000 a 0 en 3 ciclos, contaremos hasta el 100 lento y contaremos de 10 en 10.

#include <iostream>
#include <locale.h>
#include <string>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    int num = 0;
    bool tecla = true;
    bool aux = 1;

    while (tecla == true)
    {
        num = 0;

        while (aux == true) //Mientras que la evaluación sea verdadera se ejecutara lo que este dentro
        {


            num = num + 1;
            std::cout << num << std::endl;

            if (num >= 100)
            {
                aux = false;
            }
        }

        std::cin >> tecla;
        aux = true;
    }
}


