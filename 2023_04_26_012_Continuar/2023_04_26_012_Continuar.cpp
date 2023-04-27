// Rodrigo Farías Andrés
// En este programa jugaremos un  juego infinito y contaremos hasta 100
//
//

#include <iostream>
#include <locale.h>
#include <string>


int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    bool tecla = true;
    int vidas = 3;
    bool aux = 1;

    std::cout << "Bienvenido al juego infinito. Presiona una tecla.\n";
    
    while (tecla == true)
    {
        vidas = 3;

     while (aux==true) //Mientras que la evaluación sea verdadera se ejecutara lo que este dentro
     {
        system("pause");
        
        vidas = vidas - 1;
        std::cout << "\nMoriste y perdiste una vida. Tienes: " << vidas <<  ". Presiona otra tecla.\n";

        if (vidas <= 0)
        {
            aux = false;
        }
     } 
        std::cout << "¿Quieres continuar? 1.Sí 0.No\n";
        std::cin >> tecla;
        aux = true;
    }
   
    //Lo de contar

    int num = 0;
    bool teclas = true;

    while (teclas == true)
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
        
        std::cin >> teclas;
        aux = true;
    }
    std::cout << "Gracias por usar mi programa :)";
} 