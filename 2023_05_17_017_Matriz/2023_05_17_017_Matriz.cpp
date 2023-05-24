// Rodrigo Farías Andrés 
//

#include <iostream>
#include <random>

int main()
{

    int edades[5][7];
    int filas = (sizeof(edades) / sizeof(edades[0]));
    std::cout << "Filas: " << filas << std::endl;
    int  columnas = (sizeof(edades[0]) / sizeof(edades[0][0]));
    std::cout << "Columnas: " << columnas << std::endl;
//Imprimir el apendice de cada sizeof
      //Sizeof edades, edades[], edades[][].
    std::cout << "Edades: " << sizeof(edades) << std::endl;
    std::cout << "Edades: " << sizeof(edades[0]) << std::endl;
    std::cout << "Edades: " << sizeof(edades[0][0]) << std::endl << std::endl;

    ////////////////////////////////////////////////////////////////////////////

    srand(time(NULL));
    //Declarar la matriz
    int mat[3][3];
    //Ingresar datos aleatorios a la matriz
    for (int i = 0; i < 3; i++)//Ciclo para acceder a la filas
    {
        for (int j = 0; j < 3; j++)//Ciclo para acceder a la columnas
        {
            mat[i][j] = rand() % 10;
        }
    }
    //Imprimir toda la matriz
    for (int i = 0; i < 3; i++)//Ciclo para acceder a la filas
    {
        for (int j = 0; j < 3; j++)//Ciclo para acceder a la columnas
        {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }

}