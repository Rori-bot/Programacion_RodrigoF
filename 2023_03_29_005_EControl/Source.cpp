//Rodrigo Farías Andrés
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

	std::cout << "¿Qué edad tienes?" << std::endl;
	std::cin >> edad;
	if (edad >= 18)
	{
		std::cout << "Bienvenido al club de los adultos." << std::endl;

	}
	if (edad < 18)
	{
		std::cout << "Sáquese al club de los pequeñines." << std::endl;
	}
	//IF-ELSE
	//Syntaxis
	std::cout << "¿Cuántos grados centígrados tienes de temperatura?" << std::endl;
	std::cin >> temperatura;
	if (temperatura >= 36 && temperatura <= 38)
	{
		std::cout << "Usted se encuentra en buen estado.";
	}
	else
	{
		std::cout << "Si sigue consciente, vaya al médico urgentemente." << std::endl;
	}

	//Switch Case
	//Syntaxis
	int opc = 0;
	std::cout << "Hola usuario, resiona una tecla del 1 al 4 para leer la frase de tu personaje favorito" << std::endl;
	std::cin >> opc;

	switch (opc)
	{
	case 1:
		std::cout << "¡Mi taladro es el taladro que perfora los cielos!" << std::endl;
		break;
	case 2:
		std::cout << "No confíes en ti, confía en el mí que confía en ti." << std::endl;
		break;
	case 3: 
		std::cout << "No me recuerdes a mí, recuerda mis enseñanzas." << std::endl;
		break;
	case 4: 
		std::cout << "Me enamoré de ti en un bazar." << std::endl;
		break;
	default:
		std::cout << "Nel mijo, esa tecla non." << std::endl;
		break;

	}












}