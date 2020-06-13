#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
    string kike;
    int tam;


    cout<<"ingrese su nombre: ";
    getline(cin,kike);
    tam = kike.length() ;

    cout<<tam<<endl;


    system("pause");
    return 0;
}
