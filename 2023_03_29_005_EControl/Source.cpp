//Rodrigo Far�as Andr�s
//Veremos estrcturas de control
//Decisiones
//Bucles
//

#include <iostream>
#include <locale.h>
#include <string>


int main()
{
	setlocale(LC_ALL, "es_MX.UTF-8");
	//Estructura de control 1
	//IF
	//Syntaxis

	

	int edad = 0;
	float temperatura = 0;

	std::cout << "�Qu� edad tienes?" << std::endl;
	std::cin >> edad;
	if (edad >= 18)
	{
		std::cout << "Bienvenido al club de los adultos." << std::endl;

	}
	if (edad < 18)
	{
		std::cout << "S�quese al club de los peque�ines." << std::endl;
	}
	//IF-ELSE
	//Syntaxis
	std::cout << "�Cu�ntos grados cent�grados tienes de temperatura?" << std::endl;
	std::cin >> temperatura;
	if (temperatura >= 36 && temperatura <= 38)
	{
		std::cout << "Usted se encuentra en buen estado.";
	}
	else
	{
		std::cout << "Si sigue consciente, vaya al m�dico urgentemente." << std::endl;
	}

	//Switch Case
	//Syntaxis
	int opc = 0;
	std::cout << "Hola usuario, resiona una tecla del 1 al 4 para leer la frase de tu personaje favorito" << std::endl;
	std::cin >> opc;

	switch (opc)
	{
	case 1:
		std::cout << "�Mi taladro es el taladro que perfora los cielos!" << std::endl;
		break;
	case 2:
		std::cout << "No conf�es en ti, conf�a en el m� que conf�a en ti." << std::endl;
		break;
	case 3: 
		std::cout << "No me recuerdes a m�, recuerda mis ense�anzas." << std::endl;
		break;
	case 4: 
		std::cout << "Me enamor� de ti en un bazar." << std::endl;
		break;
	default:
		std::cout << "Nel mijo, esa tecla non." << std::endl;
		break;

	}












}