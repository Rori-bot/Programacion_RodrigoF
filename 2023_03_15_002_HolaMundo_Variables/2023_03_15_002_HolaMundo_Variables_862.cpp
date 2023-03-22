// 2023_03_15_002_HolaMundo_Variables_862_Rodrigo_Farias_Andres.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Rodrigo Farías Andrés
//Hola Mundo, variables

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";//Comunicarnos con el usuario
    //con cout me comunico con el usuario
    //con \n y con std::endl doy un salto de linea
std:std::cout << "Hola \nwawos" << std::endl;
    //Tipos de Variables bool, int, float, char, string
    //Sintaxys para nombrar variables
    //Tipo de Variable - Nombre de la Variable - Inicialización
    bool continuar = true;
    int Vida = 100;
    float ataque = 18.5;
    char nombre[15] = "Rodris";
    std::string namertag = "Cochayuyo";
    //<< es concatenar o sumar textos
    std::cout << "Hole " << nombre << " Bienvenido al mundo de " << namertag << std::endl
        << std::endl;
    std::cout << std::endl;

    //Operadores Aritméticos
    //+ - * / ^2 raíz
    Vida = Vida - ataque; 
    std::cout << "Tu vida restante es: " << Vida << std::endl;
    float Vida_Aux = 0;
    Vida_Aux = Vida - ataque;
    std::cout << "Tu vida_Aux restante es : " << Vida_Aux << std::endl;

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
