#include <iostream>
#include <locale.h>
#include <string> 

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    bool aux = true;
    std::string name;
    std::string nameU = "Rodrigo";
    std::string contra;
    std::string contraU = "wewewawa";

    while (aux)//Mientras que la evaluación sea verdadera se ejecutara lo que esta dentro
    {
        std::cout << "Hola. ¿Cuál es tu nombre? \n";
        getline(std::cin, name);
        if (name == nameU)//Si el nombre ingresado y el guardado son iguales dar bienvenida
        {
            std::cout << "Bienvenido de vuelta, " << name << ". \n";
            std::cout << "Para confirmar que eres tú. ingresa tu contraseña: \n";
            getline(std::cin, contra);
            if (contra == contraU)//Si el nombre es bueno entonces solicitar contraseña
            {
                std::cout << "Me alegra tenerte de vuelta.\n";
                system("pause");
            }
            else //Si el usuario se equivoca en la contraseña repite todo el proceso
            {
                std::cout << "Te equivocaste. \n";
                system("pause");
            }
        }
        else //Si no son iguales darle una patada
        {
            std::cout << "Desconoco quién seas, "<< name << "." << std::endl;
            system("pause");
        }
        system("cls");
    }
}