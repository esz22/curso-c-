#include <iostream>
#include <math.h>
#include <conio.h>


using namespace std;

int main()
{
    //realice un programa que calcule y muestre en la salida estandar la suma de los cuadrados de los 10 primeros enteros mayores que cero

    int cuad=0;


    for (int i=1;i<=10;i++){
        cuad+=pow(i,2);
    }
    cout << cuad << endl;

    getch();
    return 0;
}
