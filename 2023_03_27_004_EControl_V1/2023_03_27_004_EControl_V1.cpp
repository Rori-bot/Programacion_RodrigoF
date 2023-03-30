// 2023_03_27_004_EControl_V1.cpp :
// Rodrigo Farías Andrés
// En este programa haremos repaso del tema pasado In/Out - Consultorio médico
// Agregaremos la syntaxis de las estructuras de control
// 3 bool, 2 int, 2 float, 1 char, 1 string

#include <iostream>
#include <locale.h>
#include <string>

//using namespace std para evitar repetir escribir std

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    std::string nombre;
    
    int edad = 0; 
    float altura = 0;
    bool d_cabeza = false;
    bool d_estómago = false;
    bool p_nutrición = false;
    float kilos = 0;
    int malestar = 0;
    char nutrición[100] = "  ";
    float IMC;

    std::cout << "Hola, en este programa descubriremos cuál es tu IMC. Empecemos con unas simples preguntas." << std::endl;
    std::cout << "Nombre completo." << std::endl;
    getline(std::cin, nombre);
    //El getline ya debe de tener dentro el cin
    std::cout << "Mucho gusto, " << nombre << "." << std::endl;

    
    std::cout << "¿Cuántos años tienes?" << std::endl;
    std::cin >> edad;
    std::cout << "Ay qué joven." << std::endl;
    std::cout << "¿Cuánto mide?" << std::endl;
    std::cin >> altura;
    std::cout << "¿Tiene dolor de cabeza? 1=Sí 0=No" << std::endl;
    std::cin >> d_cabeza;
    std::cout << "¿Tiene dolor de estómago? 1=Sí 0=No" << std::endl;
    std::cin >> d_estómago;
    std::cout << "¿Tiene algún problema con su nutrición? 1=Sí 0=No" << std::endl;
    std::cin >> p_nutrición;
    std::cout << "¿Cuántos kilogramos pesas?" << std::endl;
    std::cin >> kilos;
    std::cout << "Del 1 al 5, ¿qué tan mal te sientes?" << std::endl;
    std::cin >> malestar;
    std::cout << "¿Consideras que tienes una buena nutrición?" << std::endl;
    std::cin >> nutrición;
    std::cout << "Entendido." << std::endl;
    IMC = (kilos / (altura * altura));
    std::cout <<  "Gracias a la información compartida tenemos que su IMC es de: " << IMC << "." << std::endl;

    
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
