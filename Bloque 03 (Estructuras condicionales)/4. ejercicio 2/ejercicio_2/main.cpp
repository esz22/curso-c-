#include <iostream>

using namespace std;

int main()
{
    //Escriba un programa que lea 3 numeros y determine cua de ellos es el mayor

    int n1,n2,n3;

    cout<<"Digite 3 numeros"<<endl;
    cin>>n1>>n2>>n3;


    if(n1>n2 && n1>n3){
        cout<<"el primer numero es el mayor"<<endl;
    }
    else if(n1>n2 && n1==n3){
        cout<<"el primer y el tercer numero son iguales y los mayores"<<endl;
    }
    else if (n1==n2 && n1>n3){
        cout<<"el primer y el segundo numero son iguales y los mayores"<<endl;
    }
    else if (n2>n1 && n2>n3){
        cout<<"el segundo numero es el mayor"<<endl;
    }
    else if (n3>n1 && n3>n2){
        cout<<"el tercer numero es el mayor"<<endl;
    }
    else if (n1==n2 && n1==n3){
        cout<<"todos los numeros son iguales"<<endl;
    }
    else if (n2==n3 && n3>n1){
        cout<<"el segundo y tercer numero son iguales y los mayores"<<endl;
    }

    return 0;
}
