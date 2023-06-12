// 2023_06_10_UsoDeConjuntos
// Rodrigo Farías Andrés

#include <iostream>
#include <locale.h>
#include <string>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    std::string nombre;
    int resp = 0;
    int op = 0;
    int elementos = 0;
    std::string A1;
    std::string A2;
    std::string A3;
    std::string A4;
    std::string A5;
    std::string A6;
    std::string A7;
    std::string A8;
    std::string A9;
    std::string A10;
    std::string B1;
    std::string B2;
    std::string B3;
    std::string B4;
    std::string B5;
    std::string B6;
    std::string B7;
    std::string B8;
    std::string B9;
    std::string B10;

    std::cout << "¡Bienvenido seas, querido usuario! :D\n¿Crees que podrías darme tu nombre? :O\n";
    std::cin >> nombre;
    std::cout << "Mucho gusto, " << nombre << ". :)\n\nYo soy una calculadora de conjuntos.\n¿Quieres que te explique qué es un conjunto?\n1.Sí por favor.\n0.No gracias\n";
    std::cin >> resp;

    if (resp == 1)
    {
        resp = 0;
        std::cout << "\nUn conjunto es una colección de objetos o elementos como lo podrían ser números, símbolos y demás información.\nAquellos objetos son separados separados por una coma (,) y encerrados por llaves ({}).\n";
        std::cout << "Ej. A={1,2,3,19,$,%,Jamón}\n*'A' es el conjunto y todo lo que está dentro de las llaves son los conjuntos.*\n";
    }
    else
    {
        std::cout << "\nEntonces continuemos.\n";
    }

    std::cout << "\nMi porpósito es ayudarte a hacer operaciones con conjuntos.\n\n¿Con qué operación te gustaría comenzar?\n";
    std::cout << "1.Unión (u)\n2.Intersección (∩)\n3.Diferencia (-)\n";
    std::cin >> op;
    switch (op)
    {
    case 1:
        std::cout << "\n¡Has elegido Unión (u)! :D\n\n¿Quieres que te explique su definición?\n1.Sí por favor\n0.No gracias\n";
        std::cin >> resp;
        if (resp == 1)
        {
            resp = 0;
            std::cout << "\nLa unión consiste en todos los elementos que existen en el conjunto A y todos los elementos que existen en el conjunto B.\nEj. AuB={x|x pertenece a A or pertenece a B}\n";
            std::cout << "A={1,2,3,4}    B={4,5,6,7}\nAuB={1,2,3,4,5,6,7}\n";
        }
        else
        {
            std::cout << "\nEntonces asumo que ya sabrás del tema. :)\n";
        }
        system("pause");
        std::cout << "\nProcedamos a hacer la unión de dos conjuntos.\n";
        std::cout << "¿Cuántos elementos quieres que tengan ambos conjuntos?\n1.Dos elementos\n2.Cinco elementos\n3.Diez elementos\n\n";
        std::cin >> elementos;
        switch (elementos)
        {
        case 1:
            std::cout << "\nIngresa el 1er elemento del conjunto A:\n";
            std::cin >> A1;
            std::cout << "Ingresa el 2do elemento del conjunto A:\n";
            std::cin >> A2;
            std::cout << "Ingresa el 1er elemento del conjunto B:\n";
            std::cin >> B1;
            std::cout << "Ingresa el 2do elemento del conjunto B:\n";
            std::cin >> B2;
            system("pause");

            std::cout << "\nAuB={" << A1 << "," << A2 << "," << B1 << "," << B2 << "}\n";
            system("pause");
            std::cout << std::endl;
            break;
        case 2:
            std::cout << "\nIngresa el 1er elemento del conjunto A:\n";
            std::cin >> A1;
            std::cout << "Ingresa el 2do elemento del conjunto A:\n";
            std::cin >> A2;
            std::cout << "Ingresa el 3er elemento del conjunto A:\n";
            std::cin >> A3;
            std::cout << "Ingresa el 4to elemento del conjunto A:\n";
            std::cin >> A4;
            std::cout << "Ingresa el 5to elemento del conjunto A:\n";
            std::cin >> A5;
            std::cout << "Ingresa el 1er elemento del conjunto B:\n";
            std::cin >> B1;
            std::cout << "Ingresa el 2do elemento del conjunto B:\n";
            std::cin >> B2;
            std::cout << "Ingresa el 3er elemento del conjunto B:\n";
            std::cin >> B3;
            std::cout << "Ingresa el 4to elemento del conjunto B:\n";
            std::cin >> B4;
            std::cout << "Ingresa el 5to elemento del conjunto B:\n";
            std::cin >> B5;
            system("pause");

            std::cout << "\nAuB={" << A1 << "," << A2 << "," << A3 << "," << A4 << "," << A5 << "," << B1 << "," << B2 << "," << B3 << "," << B4 << "," << B5 << "}\n";
            system("pause");
            std::cout << std::endl;

            break;
        case 3:
            std::cout << "\nIngresa el 1er elemento del conjunto A:\n";
            std::cin >> A1;
            std::cout << "Ingresa el 2do elemento del conjunto A:\n";
            std::cin >> A2;
            std::cout << "Ingresa el 3er elemento del conjunto A:\n";
            std::cin >> A3;
            std::cout << "Ingresa el 4to elemento del conjunto A:\n";
            std::cin >> A4;
            std::cout << "Ingresa el 5to elemento del conjunto A:\n";
            std::cin >> A5;
            std::cout << "Ingresa el 6to elemento del conjunto A:\n";
            std::cin >> A6;
            std::cout << "Ingresa el 7mo elemento del conjunto A:\n";
            std::cin >> A7;
            std::cout << "Ingresa el 8vo elemento del conjunto A:\n";
            std::cin >> A8;
            std::cout << "Ingresa el 9no elemento del conjunto A:\n";
            std::cin >> A9;
            std::cout << "Ingresa el 10mo elemento del conjunto A:\n";
            std::cin >> A10;
            std::cout << "Ingresa el 1er elemento del conjunto B:\n";
            std::cin >> B1;
            std::cout << "Ingresa el 2do elemento del conjunto B:\n";
            std::cin >> B2;
            std::cout << "Ingresa el 3er elemento del conjunto B:\n";
            std::cin >> B3;
            std::cout << "Ingresa el 4to elemento del conjunto B:\n";
            std::cin >> B4;
            std::cout << "Ingresa el 5to elemento del conjunto B:\n";
            std::cin >> B5;
            std::cout << "Ingresa el 6to elemento del conjunto B:\n";
            std::cin >> B6;
            std::cout << "Ingresa el 7mo elemento del conjunto B:\n";
            std::cin >> B7;
            std::cout << "Ingresa el 8vo elemento del conjunto B:\n";
            std::cin >> B8;
            std::cout << "Ingresa el 9no elemento del conjunto B:\n";
            std::cin >> B9;
            std::cout << "Ingresa el 10mo elemento del conjunto B:\n";
            std::cin >> B10;
            system("pause");

            std::cout << "\nAuB={" << A1 << "," << A2 << "," << A3 << "," << A4 << "," << A5 << "," << A6 << "," << A7 << "," << A8 << "," << A9 << "," << A10 << "," << B1 << "," << B2 << "," << B3 << "," << B4 << "," << B5 << "," << B6 << "," << B7 << "," << B8 << "," << B9 << "," << B10 << "}\n";
            system("pause");
            std::cout << std::endl;

            break;
        default:
            std::cout << "No tenemos esa opción. Una disculpa. :/\n";
            system("pause");
            std::cout << std::endl;
            break;

        }
        break;

    case 2:
        std::cout << "¡Has elegido Intersección (n)! :D\n\n¿Quieres que te explique su definición?\n1.Sí por favor\n0.No gracias\n";
        std::cin >> resp;
        if (resp == 1)
        {
            std::cout << "\nLa intersección consiste en todos los elementos que existan en el conjunto A que también existan en el conjunto B.\nEj. AnB={x|x que pertenece a A and x que pertenece a B}";
            std::cout << "\nA={1,2,3,4}    B={3,4,5,6}\nAnB={3,4}\n";
        }
        else
        {
            std::cout << "\nEntonces asumo que ya sabrás del tema. :)\n";
        }
        system("pause");
        std::cout << "\nProcedamos a hacer la intersección de dos conjuntos.\n";
        std::cout << "¿Cuántos elementos quieres que tengan ambos conjuntos?\n1.Dos elementos\n2.Cinco elementos\n3.Diez elementos\n\n";
        std::cin >> elementos;

        switch (elementos)
        {
        case 1:
            std::cout << "\nIngresa el 1er elemento del conjunto A:\n";
            std::cin >> A1;
            std::cout << "Ingresa el 2do elemento del conjunto A:\n";
            std::cin >> A2;
            std::cout << "Ingresa el 1er elemento del conjunto B:\n";
            std::cin >> B1;
            std::cout << "Ingresa el 2do elemento del conjunto B:\n";
            std::cin >> B2;

            std::cout << "AnB={";

            if (A1 == B1 || A1 == B2)
            {
                std::cout << A1;
            }

            if (A2 == B1 || A2 == B2)
            {
                std::cout << "," << A2;
            }

            std::cout << "}\n";
            system("pause");
            std::cout << std::endl;
            break;

        case 2:
            std::cout << "\nIngresa el 1er elemento del conjunto A:\n";
            std::cin >> A1;
            std::cout << "Ingresa el 2do elemento del conjunto A:\n";
            std::cin >> A2;
            std::cout << "Ingresa el 3er elemento del conjunto A:\n";
            std::cin >> A3;
            std::cout << "Ingresa el 4to elemento del conjunto A:\n";
            std::cin >> A4;
            std::cout << "Ingresa el 5to elemento del conjunto A:\n";
            std::cin >> A5;
            std::cout << "Ingresa el 1er elemento del conjunto B:\n";
            std::cin >> B1;
            std::cout << "Ingresa el 2do elemento del conjunto B:\n";
            std::cin >> B2;
            std::cout << "Ingresa el 3er elemento del conjunto B:\n";
            std::cin >> B3;
            std::cout << "Ingresa el 4to elemento del conjunto B:\n";
            std::cin >> B4;
            std::cout << "Ingresa el 5to elemento del conjunto B:\n";
            std::cin >> B5;


            std::cout << "AnB={";

            if (A1 == B1 || A1 == B2 || A1 == B3 || A1 == B4 || A1 == B5)
            {
                std::cout << A1 << ",";
            }
            if (A2 == B1 || A2 == B2 || A2 == B3 || A2 == B4 || A2 == B5)
            {
                std::cout << A2 << ",";
            }
            if (A3 == B1 || A3 == B2 || A3 == B3 || A3 == B4 || A3 == B5)
            {
                std::cout << A3 << ",";
            }
            if (A4 == B1 || A4 == B2 || A4 == B3 || A4 == B4 || A4 == B5)
            {
                std::cout << A4 << ",";
            }
            if (A5 == B1 || A5 == B2 || A5 == B3 || A5 == B4 || A5 == B5)
            {
                std::cout << A5;
            }
            std::cout << "}\n";
            system("pause");
            std::cout << std::endl;
            break;

        case 3:
            std::cout << "\nIngresa el 1er elemento del conjunto A:\n";
            std::cin >> A1;
            std::cout << "Ingresa el 2do elemento del conjunto A:\n";
            std::cin >> A2;
            std::cout << "Ingresa el 3er elemento del conjunto A:\n";
            std::cin >> A3;
            std::cout << "Ingresa el 4to elemento del conjunto A:\n";
            std::cin >> A4;
            std::cout << "Ingresa el 5to elemento del conjunto A:\n";
            std::cin >> A5;
            std::cout << "Ingresa el 6to elemento del conjunto A:\n";
            std::cin >> A6;
            std::cout << "Ingresa el 7mo elemento del conjunto A:\n";
            std::cin >> A7;
            std::cout << "Ingresa el 8vo elemento del conjunto A:\n";
            std::cin >> A8;
            std::cout << "Ingresa el 9no elemento del conjunto A:\n";
            std::cin >> A9;
            std::cout << "Ingresa el 10mo elemento del conjunto A:\n";
            std::cin >> A10;
            std::cout << "Ingresa el 1er elemento del conjunto B:\n";
            std::cin >> B1;
            std::cout << "Ingresa el 2do elemento del conjunto B:\n";
            std::cin >> B2;
            std::cout << "Ingresa el 3er elemento del conjunto B:\n";
            std::cin >> B3;
            std::cout << "Ingresa el 4to elemento del conjunto B:\n";
            std::cin >> B4;
            std::cout << "Ingresa el 5to elemento del conjunto B:\n";
            std::cin >> B5;
            std::cout << "Ingresa el 6to elemento del conjunto B:\n";
            std::cin >> B6;
            std::cout << "Ingresa el 7mo elemento del conjunto B:\n";
            std::cin >> B7;
            std::cout << "Ingresa el 8vo elemento del conjunto B:\n";
            std::cin >> B8;
            std::cout << "Ingresa el 9no elemento del conjunto B:\n";
            std::cin >> B9;
            std::cout << "Ingresa el 10mo elemento del conjunto B:\n";
            std::cin >> B10;

            std::cout << "AnB={";

            if (A1 == B1 || A1 == B2 || A1 == B3 || A1 == B4 || A1 == B5 || A1 == B6 || A1 == B7 || A1 == B8 || A1 == B9 || A1 == B10)
            {
                std::cout << A1 << ",";
            }
            if (A2 == B1 || A2 == B2 || A2 == B3 || A2 == B4 || A2 == B5 || A2 == B6 || A2 == B7 || A2 == B8 || A2 == B9 || A2 == B10)
            {
                std::cout << A2 << ",";
            }
            if (A3 == B1 || A3 == B2 || A3 == B3 || A3 == B4 || A3 == B5 || A3 == B6 || A3 == B7 || A3 == B8 || A3 == B9 || A3 == B10)
            {
                std::cout << A3 << ",";
            }
            if (A4 == B1 || A4 == B2 || A4 == B3 || A4 == B4 || A4 == B5 || A4 == B6 || A4 == B7 || A4 == B8 || A4 == B9 || A4 == B10)
            {
                std::cout << A4 << ",";
            }
            if (A5 == B1 || A5 == B2 || A5 == B3 || A5 == B4 || A5 == B5 || A5 == B6 || A5 == B7 || A5 == B8 || A5 == B9 || A5 == B10)
            {
                std::cout << A5 << ",";
            }
            if (A6 == B1 || A6 == B2 || A6 == B3 || A6 == B4 || A6 == B5 || A6 == B6 || A6 == B7 || A6 == B8 || A6 == B9 || A6 == B10)
            {
                std::cout << A6 << ",";
            }
            if (A7 == B1 || A7 == B2 || A7 == B3 || A7 == B4 || A7 == B5 || A7 == B6 || A7 == B7 || A7 == B8 || A7 == B9 || A7 == B10)
            {
                std::cout << A7 << ",";
            }
            if (A8 == B1 || A8 == B2 || A8 == B3 || A8 == B4 || A8 == B5 || A8 == B6 || A8 == B7 || A8 == B8 || A8 == B9 || A8 == B10)
            {
                std::cout << A8 << ",";
            }
            if (A9 == B1 || A9 == B2 || A9 == B3 || A9 == B4 || A9 == B5 || A9 == B6 || A9 == B7 || A9 == B8 || A9 == B9 || A9 == B10)
            {
                std::cout << A9 << ",";
            }
            if (A10 == B1 || A10 == B2 || A10 == B3 || A10 == B4 || A10 == B5 || A10 == B6 || A10 == B7 || A10 == B8 || A10 == B9 || A10 == B10)
            {
                std::cout << A10;
            }

            std::cout << "}\n";
            system("pause");
            std::cout << std::endl;
            break;

        default:
            std::cout << "No tenemos esa opción. Una disculpa. :/\n";
            system("pause");
            std::cout << std::endl;
            break;
        }
        break;
    case 3:
        std::cout << "¡Has elegido Diferencia (-)! :D\n\n¿Quieres que te explique su definición?\n1.Sí por favor\n0.No gracias\n";
        std::cin >> resp;

        if (resp == 1)
        {
            std::cout << "\nLa diferencia consiste en todos los elementos que existen en A y que no existen en B (o viceversa).\nEj. A-B={x|x que pertenece a A and x que NO pertenece a B\n";
            std::cout << "A={1,2,3,4}    B={4,5,6}\nA-B={1,2,3}\nB-A={5,5}\n";
        }
        else
        {
            std::cout << "\nEntonces asumo que ya sabrás del tema. :)\n";
        }
        system("pause");
        std::cout << "\nProcedamos a hacer la diferencia de dos conjuntos.\n";
        std::cout << "¿Cuántos elementos quieres que tengan ambos conjuntos?\n1.Dos elementos\n2.Cinco elementos\n3.Diez elementos\n\n";

        std::cin >> elementos;

        switch (elementos)
        {
        case 1:
            std::cout << "\nIngresa el 1er elemento del conjunto A:\n";
            std::cin >> A1;
            std::cout << "Ingresa el 2do elemento del conjunto A:\n";
            std::cin >> A2;
            std::cout << "Ingresa el 1er elemento del conjunto B:\n";
            std::cin >> B1;
            std::cout << "Ingresa el 2do elemento del conjunto B:\n";
            std::cin >> B2;

            std::cout << "A-B={";

            if (A1 == B1 || A1 == B2)
            {
            }
            else
            {
                std::cout << A1;
            }

            if (A2 == B1 || A2 == B2)
            {
            }
            else
            {
                std::cout << "," << A2;
            }

            std::cout << "}";
            ////////////////////////////////////
            std::cout << "\nB-A={";

            if (B1 == A1 || B1 == A2)
            {
            }
            else
            {
                std::cout << B1;
            }

            if (B2 == A1 || B2 == A2)
            {
            }
            else
            {
                std::cout << "," << B2;
            }

            std::cout << "}\n";
            system("pause");
            std::cout << std::endl;
            break;

        case 2:
            std::cout << "\nIngresa el 1er elemento del conjunto A:\n";
            std::cin >> A1;
            std::cout << "Ingresa el 2do elemento del conjunto A:\n";
            std::cin >> A2;
            std::cout << "Ingresa el 3er elemento del conjunto A:\n";
            std::cin >> A3;
            std::cout << "Ingresa el 4to elemento del conjunto A:\n";
            std::cin >> A4;
            std::cout << "Ingresa el 5to elemento del conjunto A:\n";
            std::cin >> A5;
            std::cout << "Ingresa el 1er elemento del conjunto B:\n";
            std::cin >> B1;
            std::cout << "Ingresa el 2do elemento del conjunto B:\n";
            std::cin >> B2;
            std::cout << "Ingresa el 3er elemento del conjunto B:\n";
            std::cin >> B3;
            std::cout << "Ingresa el 4to elemento del conjunto B:\n";
            std::cin >> B4;
            std::cout << "Ingresa el 5to elemento del conjunto B:\n";
            std::cin >> B5;

            std::cout << "A-B={";

            if (A1 == B1 || A1 == B2 || A1 == B3 || A1 == B4 || A1 == B5)
            {
            }
            else
            {
                std::cout << A1;
            }
            if (A2 == B1 || A2 == B2 || A2 == B3 || A2 == B4 || A2 == B5)
            {
            }
            else
            {
                std::cout << "," << A2;
            }
            if (A3 == B1 || A3 == B2 || A3 == B3 || A3 == B4 || A3 == B5)
            {
            }
            else
            {
                std::cout << "," << A3;
            }
            if (A4 == B1 || A4 == B2 || A4 == B3 || A4 == B4 || A4 == B5)
            {
            }
            else
            {
                std::cout << "," << A4;
            }
            if (A5 == B1 || A5 == B2 || A5 == B3 || A5 == B4 || A5 == B5)
            {
            }
            else
            {
                std::cout << "," << A5;
            }
            std::cout << "}";
            ////////////////////////////////////
            std::cout << "\nB-A={";
            if (B1 == A1 || B1 == A2 || B1 == A3 || B1 == A4 || B1 == A5)
            {
            }
            else
            {
                std::cout << "," << B1;
            }
            if (B2 == A1 || B2 == A2 || B2 == A3 || B2 == A4 || B2 == A5)
            {
            }
            else
            {
                std::cout << "," << B2;
            }
            if (B3 == A1 || B3 == A2 || B3 == A3 || B3 == A4 || B3 == A5)
            {
            }
            else
            {
                std::cout << "," << B3;
            }
            if (B4 == A1 || B4 == A2 || B4 == A3 || B4 == A4 || B4 == A5)
            {
            }
            else
            {
                std::cout << "," << B4;
            }
            if (B5 == A1 || B5 == A2 || B5 == A3 || B5 == A4 || B5 == A5)
            {
            }
            else
            {
                std::cout << "," << B5;
            }
            std::cout << "}\n";
            system("pause");
            std::cout << std::endl;
            break;

        case 3:
            std::cout << "\nIngresa el 1er elemento del conjunto A:\n";
            std::cin >> A1;
            std::cout << "Ingresa el 2do elemento del conjunto A:\n";
            std::cin >> A2;
            std::cout << "Ingresa el 3er elemento del conjunto A:\n";
            std::cin >> A3;
            std::cout << "Ingresa el 4to elemento del conjunto A:\n";
            std::cin >> A4;
            std::cout << "Ingresa el 5to elemento del conjunto A:\n";
            std::cin >> A5;
            std::cout << "Ingresa el 6to elemento del conjunto A:\n";
            std::cin >> A6;
            std::cout << "Ingresa el 7mo elemento del conjunto A:\n";
            std::cin >> A7;
            std::cout << "Ingresa el 8vo elemento del conjunto A:\n";
            std::cin >> A8;
            std::cout << "Ingresa el 9no elemento del conjunto A:\n";
            std::cin >> A9;
            std::cout << "Ingresa el 10mo elemento del conjunto A:\n";
            std::cin >> A10;
            std::cout << "Ingresa el 1er elemento del conjunto B:\n";
            std::cin >> B1;
            std::cout << "Ingresa el 2do elemento del conjunto B:\n";
            std::cin >> B2;
            std::cout << "Ingresa el 3er elemento del conjunto B:\n";
            std::cin >> B3;
            std::cout << "Ingresa el 4to elemento del conjunto B:\n";
            std::cin >> B4;
            std::cout << "Ingresa el 5to elemento del conjunto B:\n";
            std::cin >> B5;
            std::cout << "Ingresa el 6to elemento del conjunto B:\n";
            std::cin >> B6;
            std::cout << "Ingresa el 7mo elemento del conjunto B:\n";
            std::cin >> B7;
            std::cout << "Ingresa el 8vo elemento del conjunto B:\n";
            std::cin >> B8;
            std::cout << "Ingresa el 9no elemento del conjunto B:\n";
            std::cin >> B9;
            std::cout << "Ingresa el 10mo elemento del conjunto B:\n";
            std::cin >> B10;

            std::cout << "\nA-B={";

            if (A1 == B1 || A1 == B2 || A1 == B3 || A1 == B4 || A1 == B5 || A1 == B6 || A1 == B7 || A1 == B8 || A1 == B9 || A1 == B10)
            {
            }
            else
            {
                std::cout << A1;
            }
            if (A2 == B1 || A2 == B2 || A2 == B3 || A2 == B4 || A2 == B5 || A2 == B6 || A2 == B7 || A2 == B8 || A2 == B9 || A2 == B10)
            {
            }
            else
            {
                std::cout << "," << A2;
            }
            if (A3 == B1 || A3 == B2 || A3 == B3 || A3 == B4 || A3 == B5 || A3 == B6 || A3 == B7 || A3 == B8 || A3 == B9 || A3 == B10)
            {
            }
            else
            {
                std::cout << "," << A3;
            }
            if (A4 == B1 || A4 == B2 || A4 == B3 || A4 == B4 || A4 == B5 || A4 == B6 || A4 == B7 || A4 == B8 || A4 == B9 || A4 == B10)
            {
            }
            else
            {
                std::cout << "," << A4;
            }
            if (A5 == B1 || A5 == B2 || A5 == B3 || A5 == B4 || A5 == B5 || A5 == B6 || A5 == B7 || A5 == B8 || A5 == B9 || A5 == B10)
            {
            }
            else
            {
                std::cout << "," << A5;
            }
            if (A6 == B1 || A6 == B2 || A6 == B3 || A6 == B4 || A6 == B5 || A6 == B6 || A6 == B7 || A6 == B8 || A6 == B9 || A6 == B10)
            {
            }
            else
            {
                std::cout << "," << A6;
            }
            if (A7 == B1 || A7 == B2 || A7 == B3 || A7 == B4 || A7 == B5 || A7 == B6 || A7 == B7 || A7 == B8 || A7 == B9 || A7 == B10)
            {
            }
            else
            {
                std::cout << "," << A7;
            }
            if (A8 == B1 || A8 == B2 || A8 == B3 || A8 == B4 || A8 == B5 || A8 == B6 || A8 == B7 || A8 == B8 || A8 == B9 || A8 == B10)
            {
            }
            else
            {
                std::cout << "," << A8;
            }
            if (A9 == B1 || A9 == B2 || A9 == B3 || A9 == B4 || A9 == B5 || A9 == B6 || A9 == B7 || A9 == B8 || A9 == B9 || A9 == B10)
            {
            }
            else
            {
                std::cout << "," << A9;
            }
            if (A10 == B1 || A10 == B2 || A10 == B3 || A10 == B4 || A10 == B5 || A10 == B6 || A10 == B7 || A10 == B8 || A10 == B9 || A10 == B10)
            {
            }
            else
            {
                std::cout << "," << A10;
            }
            std::cout << "}";
            ////////////////////////////////
            std::cout << "\nB-A={";

            if (B1 == A1 || B1 == A2 || B1 == A3 || B1 == A4 || B1 == A5 || B1 == A6 || B1 == A7 || B1 == A8 || B1 == A9 || B1 == A10)
            {
            }
            else
            {
                std::cout << B1;
            }
            if (B2 == A1 || B2 == A2 || B2 == A3 || B2 == A4 || B2 == A5 || B2 == A6 || B2 == A7 || B2 == A8 || B2 == A9 || B2 == A10)
            {
            }
            else
            {
                std::cout << "," << B2;
            }
            if (B3 == A1 || B3 == A2 || B3 == A3 || B3 == A4 || B3 == A5 || B3 == A6 || B3 == A7 || B3 == A8 || B3 == A9 || B3 == A10)
            {
            }
            else
            {
                std::cout << "," << B3;
            }
            if (B4 == A1 || B4 == A2 || B4 == A3 || B4 == A4 || B4 == A5 || B4 == A6 || B4 == A7 || B4 == A8 || B4 == A9 || B4 == A10)
            {
            }
            else
            {
                std::cout << "," << B4;
            }
            if (B5 == A1 || B5 == A2 || B5 == A3 || B5 == A4 || B5 == A5 || B5 == A6 || B5 == A7 || B5 == A8 || B5 == A9 || B5 == A10)
            {
            }
            else
            {
                std::cout << "," << B5;
            }
            if (B6 == A1 || B6 == A2 || B6 == A3 || B6 == A4 || B6 == A5 || B6 == A6 || B6 == A7 || B6 == A8 || B6 == A9 || B6 == A10)
            {
            }
            else
            {
                std::cout << "," << B6;
            }
            if (B7 == A1 || B7 == A2 || B7 == A3 || B7 == A4 || B7 == A5 || B7 == A6 || B7 == A7 || B7 == A8 || B7 == A9 || B7 == A10)
            {
            }
            else
            {
                std::cout << "," << B7;
            }
            if (B8 == A1 || B8 == A2 || B8 == A3 || B8 == A4 || B8 == A5 || B8 == A6 || B8 == A7 || B8 == A8 || B8 == A9 || B8 == A10)
            {
            }
            else
            {
                std::cout << "," << B8;
            }
            if (B9 == A1 || B9 == A2 || B9 == A3 || B9 == A4 || B9 == A5 || B9 == A6 || B9 == A7 || B9 == A8 || B9 == A9 || B9 == A10)
            {
            }
            else
            {
                std::cout << "," << B9;
            }
            if (B10 == A1 || B10 == A2 || B10 == A3 || B10 == A4 || B10 == A5 || B10 == A6 || B10 == A7 || B10 == A8 || B10 == A9 || B10 == A10)
            {
            }
            else
            {
                std::cout << "," << B10;
            }
            std::cout << "}\n";
            system("pause");
            std::cout << std::endl;
            break;

        default:
            std::cout << "No tenemos esa opción. Una disculpa. :/\n";
            system("pause");
            std::cout << std::endl;
            break;
        }
    }
    std::cout << "\nAquí concluye mi trabajo, " << nombre << ".¡Espero te haya sido de ayuda para entender el tema de conjuntos!:D\n";
    system("pause");
    std::cout << std::endl;
}