#include <iostream>

using namespace std;

int main()
{
    int numero;


    cout << "Digite un numero entre 1 - 5: " << endl;
    cin >>numero;

    switch(numero){
    case 1:
        cout<<"es el numero 1"<<endl;
        break;
    case 2:
        cout<<"es el numero 2"<<endl;
        break;
    case 3:
        cout<<"es el numero 3"<<endl;
        break;
    case 4:
        cout<<"es el numero 4"<<endl;
        break;
    case 5:
        cout<<"es el numero 5"<<endl;
        break;
    default:
        cout<<"el numero esta fuera de rango"<<endl;
        break;
    }



    return 0;
}
