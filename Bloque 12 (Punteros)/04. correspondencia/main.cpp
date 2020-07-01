#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int numeros[]={1,8,3,7,5};
    int *dir_numeros;

    dir_numeros=&numeros[0];

    for (int i=0;i<5;i++){
        cout<<"elemento del vector "<<i+1<<": "<<*dir_numeros++<<endl;
    }

    for (int i=0;i<5;i++){
        cout<<"posiciones de memoria del elemento "<<i+1<<": "<<dir_numeros++<<endl;
    }
    system("pause");
    return 0;
}
