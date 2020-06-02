#include <iostream>

using namespace std;

int main()
{
    //escriba un programa que lea de la entrada estandar 3 numeros. Despues debe
    //leer un cuarto numero e indicr si el numero coincide con alguno de los introducidos con anterioridad

    int n1,n2,n3,n4;


    cout << "digite 3 numeros" << endl;
    cin >>n1>>n2>>n3;

    cout << "digite el cuarto numero" << endl;
    cin >>n4;

    if (n4==n1 || n4==n2 || n4==n3){
        cout<<"el cuarto numero coincide con almenos uno de los 3 primeros"<<endl;
    }
    else{
        cout <<"el cuarto numero no coincide con los 3 primeros numeros"<<endl;
    }
    return 0;
}
