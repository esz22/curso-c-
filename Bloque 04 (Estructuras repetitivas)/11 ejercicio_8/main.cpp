#include <iostream>
#include <conio.h>


using namespace std;

int main()
{
    //Escriba un programa que calcule el valor de: 1+3+5+...+2n-1


    int n,suma=0;

    cout << "Digite el valor de n: " << endl;
    cin>>n;

    for(int i=1;i<=2*n-1;i+=2){
        suma+=i;
    }
    cout<<"\nEl valor de la suma es: "<<suma<<endl;


    getch();
    return 0;
}
