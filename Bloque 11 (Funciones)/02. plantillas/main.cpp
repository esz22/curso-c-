/*plantillas de funcion
ejemplo: sacar el valor absoluto de un numero
*/

#include <iostream>
#include <conio.h>

using namespace std;

//prototipo
template <class tipoD>
void mostratABS(tipoD numero);

int main()
{
    int n1=-3;
    float n2=-455.3;
    double n3=43443.3;

    mostratABS(n1);
    mostratABS(n2);
    mostratABS(n3);


    getch();
    return 0;
}

template <class tipoD>
void mostratABS(tipoD numero){
    if(numero<0){
        numero=numero*-1;
    }
    cout<<"el valor absoluto del numero es: "<<numero<<endl;
}
