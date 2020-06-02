#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //Realice un programa que calcule la descomposicion en factores primos de un numero entero.
    //por ejemplo 20=2*2*5


    int n;

    cout<<"Digite un numero"<<endl;
    cin>>n;

    for(int i=2;n>1;i++){
        while(n%i==0){
            cout<<i<<" ";
            n/=i;
        }
    }

    getch();
    return 0;
}
