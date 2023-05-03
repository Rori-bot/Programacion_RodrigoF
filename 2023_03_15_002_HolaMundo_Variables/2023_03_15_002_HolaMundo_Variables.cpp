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