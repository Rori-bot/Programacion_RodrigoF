// 2023_04_24_010_Login.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// En este programa simularemos un login de un videojuego

#include <iostream>
#include <locale.h>
#include <string>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");

    std::string nombre = "Rodrigo";
    std::string contra = "lelelala123";
    


    std::cout << "Bienvenido seas :D \nIdentifícate dándome tu nombre, porfavor. \n";
    std::cin >> nombre;
     
    if (nombre == "Rodrigo")
    {
        std::cout << "Mucho gusto tenerte de vuelta, Rodrigo.\n";
        std::cout << "Ahora ingresa tu contraseña, porfavor.\n";
        std::cin >> contra;

        if (contra == "lelelala123")
        {
            std::cout << "¡Perfecto! Iniciemos el juego :D";
        }
        else
        {
            std::cout << "Se me hace que te estás intentando colar :/\n";
        }
    }
    else
    {
        std::cout << "¿Quién sos vos?\n";
    }
    
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
