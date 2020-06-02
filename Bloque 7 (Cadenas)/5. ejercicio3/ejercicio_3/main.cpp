#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    //Pedir al usuario una cadena de caracteres, almacenarla en un arreglo y copiar todo su contenido
    //hacia otro arreglo de caracteres

    char frase[20];
    string frase2;

    cout<<"Digite una frase: ";
    cin.getline(frase,20,'\n');


    frase2.copy(frase,20,0);

    cout<<frase2<<endl;





    system("pause");
    return 0;
}
