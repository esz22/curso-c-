#include <iostream>

using namespace std;

int main()
{
    //Escriba un programa que lea dos numeros y determine cual de ellos es el mayor

    int n1, n2;

    cout<< "Digite 2 numeros"<<endl;
    cin>>n1>>n2;

    if(n1>n2){
        cout<<"el primer numero es mayor"<<endl;
    }
    else if(n1<n2){
        cout<<"el segundo numero es mayor"<<endl;
    }
    else{
        cout <<"Los numeros son iguales"<<endl;
    }

    return 0;
}
