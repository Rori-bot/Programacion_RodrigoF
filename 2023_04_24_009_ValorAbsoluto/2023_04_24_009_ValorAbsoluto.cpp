// 2023_04_17_006.Bucles.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// En este programa encontraremos el valor absoluto

#include <iostream>
#include <locale.h>
#include <string>


int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");

    int abs = 0;
    int n1 = 0;
    int n2 = 0;
    int op = 0;
    float ope = 0;

    std::cout << "Buenas tardes. En este programa encontraremos el valor absoluto de cualquier número." << std::endl << "Favor de insertar el número deseado: " << std::endl;
    std::cin >> abs;

    if (abs <= 0)
    {
        abs = abs * (-1);
        std::cout << "El valor absoluto del número es: " << abs << std::endl;

    }
    else
    {
        std::cout << "El valor absoluto del número es: " << abs << std::endl;
    }

    std::cout << "Ahora este programa se convertirá en una calculadora. Elige el primer número con el que operaremos: \n";
    std::cin >> n1;
    std::cout << "Perfecto, ahora el segundo: \n";
    std::cin >> n2;
    std::cout << "¿Qué quieres hacer con ambos números? \n 1.Sumar \n 2.Restar \n 3.Multiplicar \n 4.Dividir \n";

    std::cin >> op;
    switch (op)
    {
    case 1:
        ope = n1 + n2;
        std::cout << "El resultado de la suma es: " << ope << ". \n";
        break;

    case 2:
        ope = n1 - n2;
        std::cout << "El resultado de la resta es:" << ope << ". \n";
        break;

    case 3:
        ope = n1 * n2;
        std::cout << "El resultado de la multiplicación: " << ope << ". \n";
        break;

    case 4:
        ope = n1 / n2;
        std::cout << "El resultado de la divisón es: " << ope << ". \n";
        break;

    default:
        std::cout << "No hay de esas :P \n";
        break;
    }

    std::cout << "Por último checaremos qué número es el mayor de entre los dos datos anteriores que anotaste. \n";
    if (n1 > n2)
    {
        std::cout << "Calculamos que " << n1 << " es mayor a " << n2 << ". \n";

    }
    else
    {
        std::cout << "Calculamos que " << n2 << " es mayor a " << n1 << ". \n";
    }

}




