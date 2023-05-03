// Rodrigo Farías Andrés
// En este programa conoceremos qué número es mayor.

#include <iostream>
#include <locale.h>
#include <string>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    int num1 = 0;
    int num2 = 0; 

    std::cout << "Hola buenas. Este programa te ayudará a saber qué número es mayor.\nPorfavor ingresa el primer número:\n";
    std::cin >> num1;
    std::cout << "Gracias, ahora ingresa el segundo número:\n";
    std::cin >> num2;

    if (num1 > num2)
    {
        std::cout << "Según nuestros cálculos te podemos asegurar que " << num1 << " es mayor a " << num2 << ".\nPor lo tanto " << num2 << " es menor a " << num1 << ".\n";
    }
    else
    {
        std::cout << "Según nuestros cálculos te podemos asegurar que " << num2 << " es mayor a " << num1 << ".\nPor lo tanto " << num1 << " es menor a " << num2 << ".\n";
    }
    std::cout << "Gracias por usar mi programa :D\n";
}