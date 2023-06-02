// 2023_05_29_020_ListasEnlazadas.cpp 
// Rodrigo Farías Andrés

#include <iostream>
#include <stdio.h>
#include <string>
#include <locale>
#include <windows.h>

class nodo //head
{
public: //data
    std::string nombre;
    int vida;
    int ataque;
    int edad;
    nodo* next;
};

int main()
{
    nodo* cabeza = NULL; // tipo de dato
    nodo* cuello = NULL;
    nodo* pecho = NULL;
    nodo* abdomen = NULL;
    nodo* brazos = NULL;
    nodo* piernas = NULL;
    nodo* pies = NULL;

    cabeza = new nodo();
    cuello = new nodo();
    pecho = new nodo();
    abdomen = new nodo();
    brazos = new nodo();
    piernas = new nodo();
    pies = new nodo();

    cabeza->nombre = "Pedrito";
    cabeza->edad = 15;
    cabeza->ataque = 120;
    cabeza->vida = 70;
    cabeza->next = cuello;

    cuello->nombre = "Juanillo";
    cuello->edad = 119;
    cuello->ataque = 768;
    cuello->vida = 223;
    cuello->next = abdomen;

    abdomen->nombre = "Carlitos";
    abdomen->edad = 145;
    abdomen->ataque = 89;
    abdomen->vida = 146;
    abdomen->next = brazos;

    brazos->nombre = "Cesarin";
    brazos->edad = 180;
    brazos->ataque = 450;
    brazos->vida = 334;
    brazos->next = piernas;

    piernas->nombre = "Cachirulo";
    piernas->edad = 77;
    piernas->ataque = 345;
    piernas->vida = 447;
    piernas->next = pies;

    pies->nombre = "ELpepe";
    pies->edad = 888;
    pies->ataque = 999;
    pies->vida = 777;
    pies->next = NULL;

    //Imprimir la lista enlazada

    std::cout << "Valores de las partes del cuerpo: \n";
    while (cabeza != NULL)
    {
        std::cout << cabeza->nombre << " " << std::endl;
        std::cout << cabeza->edad << " " << std::endl;
        std::cout << cabeza->ataque << " " << std::endl;
        std::cout << cabeza->vida << " " << std::endl << std::endl;
        cabeza = cabeza->next;
    }
}
