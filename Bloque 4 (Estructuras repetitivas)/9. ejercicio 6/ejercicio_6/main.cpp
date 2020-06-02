#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    //Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos, sin utilizar la funcion pow


    int x, y,pot=1;

    cout<<"Digite el valor de x: ";
    cin >>x;


    do{
        cout<<"\nDigite el valor de y: ";
        cin >>y;
    }while(y<0);
    if(y!=0){
        for(int i=0;i<y;i++){
            pot*=x;
        }
    }

    cout << x<<" elevado a la "<<y<<" es: "<<pot << endl;

    system("pause");
    return 0;
}
