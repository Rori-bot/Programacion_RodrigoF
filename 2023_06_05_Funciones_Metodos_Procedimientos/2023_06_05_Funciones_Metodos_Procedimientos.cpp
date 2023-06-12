// 2023_06_05_Funciones_Metodos_Procedimientos.cpp 
// Rodrigo Farías Andrés
// Funciones métodos y procedmiento

#include <iostream>
// Procedimiento para imprimir la matriz

void relleno(int** juanito, int panchito, int perenganito)
{
    srand((unsigned)time(NULL)); // SEMILLERO PARA GENERAR NÚMEROS ALEATORIOS
    for (int i = 0; i < panchito; i++)
    {
        for (int j = 0; j < perenganito; j++)
        {
            juanito[i][j] = rand() % 101; // 101  datos que son de 0 a 100
            std::cout << "|" << juanito[i][j];
        }
        std::cout << std::endl;
    }
    std::cout << "Vamos a ver la matriz rellena " << juanito << std::endl;
}

int main()
{
    int filas = 0;
    int columnas = 0;
    std::cout << "Filas?\n";
    std::cin >> filas;
    std::cout << "Columnas?\n";
    std::cin >> columnas;
    // Creación de matriz dinámica
    int** matriz = new int* [filas];
    for (int i = 0; i < filas; i++)
    {
        matriz[i] = new int[columnas];
    }

    // Creación de  matriz
    // Nombre de función(parámetro1, parámetro2, parámetro3);

    relleno(matriz, filas, columnas);

    delete[] matriz;
    matriz = NULL;
    std::cout << "Vamos a ver la matriz " << matriz << std::endl;
}