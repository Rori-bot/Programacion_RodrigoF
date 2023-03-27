// 2023_03_22_003_INOUT_V1.cpp : 
//Rodrigo Farías Andrés
//En este pograma aprenderemos a usar bibliotecas
//Reforzaremos el halar con el usuario
//Recibiremos datos del usuario

#include <iostream>
#include <locale.h>
#include <string>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    bool pregunta = false;
    int n_tacos = 0;
    float precio = 0;
    char nom_taquero[100] = " ";
    std::string nom_taquería = "                     ";

    std::cout << "Hola bienvenido a tu programa...";
    std::cout << "Lea y responda con verdadero o falso: \n" <<
        "¿Anoche cenó tacos al pastor? 0)No 1)Sí" << std::endl;
    //Recibir respuesta del usuario
    std::cin >> pregunta;

    std::cout << "Ya veo, entonces es " << pregunta << " que cenaste tacos." << std::endl; 
    std::cout << "¿Cuántos tacos? " << std::endl;
    std::cin >> n_tacos;
    std::cout << "Uorales, entonces te comiste " << n_tacos << " tacotes." << std::endl;

    std::cout << "¿Cuánto te cuesta cada taco?" << std::endl;
    std::cin >> precio;
    std::cout << "¿Apoco a " << precio << " pesos el taquito?" << 
        std::endl;

    std::cout << "¿Cómo se llamaba el taquero?" << std::endl;
    std::cin >> nom_taquero;
    std::cout << "¿" << nom_taquero << "? A él no lo conozco." << std::endl;

    std::cout << "¿A qué taquería fuiste?" << std::endl;
    std::cin >> nom_taquería;
    std::cout << "¿" << nom_taquería << "? Ah ya ubiqué." << std::endl;
    


}


